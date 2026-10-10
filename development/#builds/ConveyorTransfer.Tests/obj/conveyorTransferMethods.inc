void allPositionsClass::moveBaskets(positionListClass* from, positionListClass* to)
{
	if ((!from) || (!to) || from == to || isDatabaseReadOnlyMode())
		return;

	if (from->getNumberOfBaskets() == 0)
		return;

	if (to->getNumberOfBaskets() != 0)
	{
		LOG("WARNING: CONVEYOR TRANSFER", "Transfer blocked: destination is occupied in memory");
		return;
	}

	if (from->getNumberOfPositions() != to->getNumberOfPositions())
		return;

	// Lock and validate the entire stack before writing any slot. In-memory
	// emptiness is not sufficient: a web correction can change positions between
	// refreshes. HOLDLOCK retains the predicate locks until transaction commit.
	QVector<int> basketIds;
	QVector<bool> basketContents;
	QStringList checks, writes;
	QSet<int> identities;
	const QDateTime eventTime = QDateTime::currentDateTime();
	for (int i = 0; i < from->getNumberOfPositions(); ++i)
	{
		basketPositionClass* source = from->getPosition(i);
		basketPositionClass* destination = to->getPosition(i);
		if (!source || !destination || source->getIsLockedByCrane() || destination->getIsLockedByCrane())
		{
			LOG("WARNING: CONVEYOR TRANSFER", "Transfer blocked: missing slot or slot reserved by crane");
			return;
		}
		const int basketId = source->getBasketTableId();
		if (basketId < 0 || (basketId > 0 && identities.contains(basketId)))
		{
			LOG("WARNING: CONVEYOR TRANSFER", "Transfer blocked: invalid or duplicate source basket identity");
			return;
		}
		if (basketId > 0) identities.insert(basketId);
		basketIds.append(basketId);
		basketContents.append(source->hasContents());
		basketPositionClass* transferSlots[] = { source, destination };
		for (int s = 0; s < 2; ++s)
		{
			const int expected = s == 0 ? basketId : 0;
			const QString predicate = QString("posNumber=%1 and posIndex=%2")
				.arg(transferSlots[s]->getNumber()).arg(transferSlots[s]->getIndex());
			checks << QString("if (select count(*) from positions with (UPDLOCK,HOLDLOCK) where %1) <> 1 "
				"or not exists (select 1 from positions with (UPDLOCK,HOLDLOCK) where %1 and basketTableId=%2 and targetNumber=0) "
				"raiserror('Conveyor assignment conflict at %3/%4: expected basket %2 and no outgoing mission',16,1)")
				.arg(predicate).arg(expected).arg(transferSlots[s]->getNumber()).arg(transferSlots[s]->getIndex());
		}
		if (basketId == 0) continue;
		checks << QString("if (select count(*) from positions with (UPDLOCK,HOLDLOCK) where basketTableId=%1) <> 1 "
			"raiserror('Conveyor assignment conflict: basket %1 is assigned more than once',16,1)").arg(basketId);
		for (int s = 0; s < 2; ++s)
		{
			const int expected = s == 0 ? basketId : 0;
			const int replacement = s == 0 ? 0 : basketId;
			writes << QString("update positions set basketTableId=%1 where posNumber=%2 and posIndex=%3 and basketTableId=%4; "
				"if @@ROWCOUNT <> 1 raiserror('Conveyor assignment changed during transfer at %2/%3',16,1)")
				.arg(replacement).arg(transferSlots[s]->getNumber()).arg(transferSlots[s]->getIndex()).arg(expected);
			const QString description = (transferSlots[s]->getDescription().trimmed() + " %1 %2")
				.arg(transferSlots[s]->getNumber()).arg(transferSlots[s]->getIndex()).replace("'", "''");
			writes << QString("insert into basketHistory (type,position,destination,basketTableId,date,sec) "
				"values('set','%1','-',%2,'%3',%4)")
				.arg(description).arg(replacement).arg(eventTime.toString("yyyy-MM-dd hh:mm:ss")).arg(eventTime.toTime_t());
		}
	}
	setDbTableActive("positions", false);
	setDbTableActive("basketHistory", false);
	QString databaseError;
	const bool committed = execDBTransaction(checks + writes, MAIN_DB_CONNECTION, 3, &databaseError);
	setDbTableIdle("basketHistory");
	setDbTableIdle("positions");
	if (!committed)
	{
		LOG("ERROR: CONVEYOR TRANSFER", QString("Transfer rolled back; memory and EPICS unchanged: from=%1/%2 to=%3/%4; %5")
			.arg(from->getPosition(0)->getNumber()).arg(from->getPosition(0)->getIndex())
			.arg(to->getPosition(0)->getNumber()).arg(to->getPosition(0)->getIndex()).arg(databaseError));
		return;
	}

	for (int i = 0; i < conveyorSourceMarkers.count(); i++)
		conveyorSourceMarkers[i]->setConveyorSource(false);
	for (int i = 0; i < conveyorTargetMarkers.count(); i++)
		conveyorTargetMarkers[i]->setConveyorTarget(false);
	conveyorSourceMarkers.clear();
	conveyorTargetMarkers.clear();

	for (int i = 0; i < from->getNumberOfPositions(); i++)
	{
		from->getPosition(i)->setConveyorSource(true);
		conveyorSourceMarkers << from->getPosition(i);
		to->getPosition(i)->setBasketTableIdAfterTransfer(basketIds[i], basketContents[i]);
		if (to->getPosition(i)->hasBasket())
		{
			to->getPosition(i)->setConveyorTarget(true);
			conveyorTargetMarkers << to->getPosition(i);
		}
		from->getPosition(i)->setBasketTableIdAfterTransfer(0, false);
		if (basketIds[i] != 0)
			LOG("BASKET ASSIGNMENT", QString("Conveyor transfer committed: source=%1/%2 basket=%3 -> 0; destination=%4/%5 basket=0 -> %3")
				.arg(from->getPosition(i)->getNumber()).arg(from->getPosition(i)->getIndex()).arg(basketIds[i])
				.arg(to->getPosition(i)->getNumber()).arg(to->getPosition(i)->getIndex()));
	}
}
void basketPositionClass::setBasketTableId(int b, bool contents)
{
	applyBasketTableId(b, contents, false);
}
void basketPositionClass::setBasketTableIdAfterTransfer(int b, bool contents)
{
	applyBasketTableId(b, contents, true);
}
void basketPositionClass::applyBasketTableId(int b, bool contents, bool assignmentCommitted)
{
	bool basketHasContents = contents;

	if (basket.getTableId() != b)
	{
		if (!assignmentCommitted)
		{
			QString stmnt = QString("insert into basketHistory (type, position, destination, basketTableId, date, sec) VALUES('%1', '%2', '%3',%4, '%5', '%6')")
				.arg("set").arg((description.trimmed() + " %1 %2").arg(number).arg(index)).arg("-").arg(QString().number(b)).arg(QDateTime::currentDateTime().toString("yyyy-MM-dd") + QTime::currentTime().toString(" hh:mm:ss")).arg(QDateTime::currentDateTime().toTime_t());

			setDbTableActive("basketHistory", false);
			execDBQuery(stmnt, MAIN_DB_CONNECTION);
			setDbTableIdle("basketHistory");
		}

		//update epics
		if (b != 0)
		{
			if (positionEnumForEpics == EPICS_POS_BASKET_NEW) {
#ifndef EMULATE
				setDbTableActive("basket_location", false);
				execDBQuery(QString("update basket_location set audittime = CONVERT(datetime,	NULL) where basketnum = %1").arg(b), APEX_DB_CONNECTION);
				setDbTableIdle("basket_location");
#else
				setDbTableActive("basket_location", false);
				execQuery(QString("update basket_location set audittime=0 where basketnum=%1").arg(b), APEX_DB_CONNECTION);
				setDbTableIdle("basket_location");
#endif
			}
			// basketHasContents = hasContents();  // only update if basket has contents.
			if (basketHasContents && (positionEnumForEpics != EPICS_POS_BASKET_NOWHERE) && (positionEnumForEpics != EPICS_POS_BASKET_NEW))
			{
				QVariant time = GETFIRST(QString("select audittime from basket_location where basketnum = %1 and basketlocation = %2").arg(b).arg(positionEnumForEpics), APEX_DB_CONNECTION);
#ifdef EMULATE
				if (time.toInt() == 0) {
					setDbTableActive("basket_location", false);
					execQuery(QString("update basket_location set audittime=datetime('now') where basketnum=%1 and basketlocation=%2").arg(b).arg(positionEnumForEpics), APEX_DB_CONNECTION);
					setDbTableIdle("basket_location");
				}
#endif
#ifndef EMULATE
				if (time.isNull() || positionEnumForEpics == EPICS_POS_BASKET_AFTER_OVEN) {  // force write when after oven pos (cuurently 160) reached regardless
					setDbTableActive("basket_location", false);
					execDBQuery(QString("update basket_location set audittime = CONVERT(datetime, CURRENT_TIMESTAMP) where basketnum = %1 and basketlocation = %2").arg(b).arg(positionEnumForEpics), APEX_DB_CONNECTION);
					setDbTableIdle("basket_location");
				}
#endif
			}
		}
	}
	//

	basket.setTableId(b);
	loadContentFromDatabase();
	if (!assignmentCommitted)
		saveToDatabase();

/////
//update [PEManager_tmp].[dbo].[basket_location] set audittime=CONVERT(datetime, '12-9-14 13:42:20:123') where basketnum=1 and basketlocation=1
//update [PEManager_tmp].[dbo].[basket_location] set audittime=CONVERT(datetime,NULL) where basketnum=1 and basketlocation=2
//update [PEManager_tmp].[dbo].[basket_location] set audittime=CONVERT(datetime,CURRENT_TIMESTAMP) where basketnum=1 and basketlocation=3
}