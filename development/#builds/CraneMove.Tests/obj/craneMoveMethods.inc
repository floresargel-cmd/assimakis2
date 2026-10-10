void craneClass::setActivePositions(basketPositionClass* from, basketPositionClass *to)
{
	if ((from && to) && ((!activeFromBasketPos) && (!activeToBasketPos)))
	{
		activeFromBasketPos = from;
		activeToBasketPos = to;
		activeFromBasketPos->setLockedByCrane(true);
		activeToBasketPos->setLockedByCrane(true);
	}
	else if (((!from) && (!to)) && (activeFromBasketPos && activeToBasketPos))
	{
		lastToBasketPos = activeToBasketPos;
		clearActivePositions();
	}
}
void craneClass::clearActivePositions()
{
	if (activeFromBasketPos)
	{
		activeFromBasketPos->setLockedByCrane(false);
		activeFromBasketPos=NULL;
	}

	if (activeToBasketPos)
	{
		activeToBasketPos->setLockedByCrane(false);
		activeToBasketPos=NULL;
	}
}
bool craneClass::move(basketPositionClass *from, basketPositionClass *to, QString* rejectionReason)
{
	if (rejectionReason) *rejectionReason = tr("The crane is not ready, or the source or destination is unavailable. Check the position and crane status before trying again.");
	if ((!hasActiveMission) && (!activeFromBasketPos) && (!activeToBasketPos) && (from&&to) && (plcStatus == 0))
	{
		if (!from->isFreeToMove())
			return false;

		// Defense in depth for direct/manual moves. Automatic destination selection
		// applies the same rule in positionListClass::getFreeToRecievePos().
		if (!from->canMoveToPosition(to->getNumber()))
		{
			LOG("CRANE MOVE", QString("Blocked basket %1 with T1/T4/F material from age oven load position %2")
				.arg(from->getBasketTableId()).arg(to->getNumber()));
			return false;
		}

		if (!to->canRecieve(from))
			return false;

		// These database-backed lists can exist without a position row.
		basketPositionClass* beforeStacker = allPositions->getBeforeStackerPosition()->getPosition(0);
		basketPositionClass* afterStacker = allPositions->getAfterStackerPosition()->getPosition(0);
		if (!beforeStacker || !afterStacker)
		{
			LOG("ERROR: CRANE MOVE", "Move rejected: missing position 400/1 or 410/1 in the positions table");
			return false;
		}
		beforeStacker->setErrorString("");
		afterStacker->setErrorString("");

		if ((from->getNumber() == 400) && (allPositions->getPlcIsBeforeStackerPosEmpty()))
		{
			beforeStacker->setErrorString("from -> this position is empty");
			return false;
		}

		if ((to->getNumber() == 400) && (!allPositions->getPlcIsBeforeStackerPosEmpty()))
		{
			beforeStacker->setErrorString("to -> this position is full");
			return false;
		}

		if ((from->getNumber() == 410) && (!allPositions->getPlcIsAfterStackerPosFull()))
		{
			afterStacker->setErrorString("from -> this position is empty");
			return false;
		}

		if ((to->getNumber() == 410) && (allPositions->getPlcIsAfterStackerPosFull()))
		{
			afterStacker->setErrorString("to -> this position is full");
			return false;
		}

		// A database trigger can reject a destination (for example, a basket
		// recorded as full at an empty-basket input). Do not publish a mission
		// or send PLC commands until both its target and history are committed.
		const QString targetStatement = QString("update positions set targetNumber=%1 , targetIndex=%2 where posNumber=%3 and posIndex=%4")
			.arg(to->getNumber()).arg(to->getIndex()).arg(from->getNumber()).arg(from->getIndex());
		const QString fromDescription = (from->getDescription().trimmed() + " %1 %2")
			.arg(from->getNumber()).arg(from->getIndex()).replace("'", "''");
		const QString toDescription = (to->getDescription().trimmed() + " %1 %2")
			.arg(to->getNumber()).arg(to->getIndex()).replace("'", "''");
		const QString historyStatement = QString("insert into basketHistory (type,position,destination,basketTableId,date,sec) VALUES('%1','%2','%3',%4,'%5','%6')")
			.arg("new").arg(fromDescription).arg(toDescription).arg(from->getBasketTableId())
			.arg(QDateTime::currentDateTime().toString("yyyy-MM-dd") + QTime::currentTime().toString(" hh:mm:ss")).arg(QDateTime::currentDateTime().toTime_t());
		setDbTableActive("positions", false);
		setDbTableActive("basketHistory", false);
		QString databaseError;
		const bool saved = execDBTransaction(QStringList() << targetStatement << historyStatement, MAIN_DB_CONNECTION, 3, &databaseError);
		setDbTableIdle("positions");
		setDbTableIdle("basketHistory");
		const QString destinationKey = QString("%1/%2").arg(to->getNumber()).arg(to->getIndex());
		if (!saved)
		{
			// Manual callers display their own popup using rejectionReason.
			if (!rejectionReason)
			{
				const QString failureKey = QString("%1/%2/%3|").arg(from->getBasketTableId())
					.arg(from->getNumber()).arg(from->getIndex()) + databaseError;
				if (automaticMoveErrors.value(destinationKey) != failureKey)
				{
					automaticMoveErrors.insert(destinationKey, failureKey);
					showAutomaticMoveError(from, to, databaseError);
				}
			}
			to->setErrorString(tr("Move rejected by database; see application log"));
			if (rejectionReason) *rejectionReason = tr("The database rejected this move.") + "\n\n" + databaseError;
			LOG("ERROR: CRANE MOVE", QString("Move not started: basket=%1 from=%2/%3 to=%4/%5; database transaction failed")
				.arg(from->getBasketTableId()).arg(from->getNumber()).arg(from->getIndex())
				.arg(to->getNumber()).arg(to->getIndex()));
			return false;
		}

		automaticMoveErrors.remove(destinationKey);
		if (rejectionReason) rejectionReason->clear();
		to->setErrorString("");
		setActivePositions(from, to);
		hasActiveMission = true;
		activeMissionTimerSlot();
		activeMissionTimer.start(activeMissionTimerTime);
		return true;
	}
	return false;
}