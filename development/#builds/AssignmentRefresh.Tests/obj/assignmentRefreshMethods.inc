void allPositionsClass::reloadBasketAssignmentsFromDatabase()
{
	// Contents refreshes cannot discover baskets added to an empty position.
	// Refresh assignments in Live mode too, without disturbing active missions.
	const bool observerMode = isDatabaseReadOnlyMode();
	setDbTableActive("positions", true);
	const QVector<QVector<QVariant> > rows = execDBTableQuery(
		"select posNumber, posIndex, basketTableId from positions order by posNumber, posIndex",
		MAIN_DB_CONNECTION);
	setDbTableIdle("positions");
	QHash<QString, int> assignments;
	QSet<QString> ambiguousAssignments;
	for (int i = 0; i < rows.count(); ++i)
	{
		if (rows[i].count() < 3 || rows[i][0].isNull() || rows[i][1].isNull() || rows[i][2].isNull())
			continue;
		const QString key = QString("%1:%2").arg(rows[i][0].toInt()).arg(rows[i][1].toInt());
		if (assignments.contains(key))
			ambiguousAssignments.insert(key);
		assignments.insert(key, rows[i][2].toInt());
	}

	int changed = 0;
	int protectedChanges = 0;
	for (int i = 0; i < allPositionList.count(); ++i)
	{
		if (!allPositionList[i])
			continue;
		const QVector<basketPositionClass*> positions = allPositionList[i]->getAllBasketPositions();
		for (int j = 0; j < positions.count(); ++j)
		{
			basketPositionClass* position = positions[j];
			if (!position)
				continue;
			const QString key = QString("%1:%2").arg(position->getNumber()).arg(position->getIndex());
			if (!assignments.contains(key) || ambiguousAssignments.contains(key))
				continue;
			const int basketId = assignments.value(key);
			if (position->getBasketTableId() != basketId)
			{
				if (!observerMode && crane && crane->isAssignmentReservedForMission(position, basketId))
				{
					++protectedChanges;
					continue;
				}
				LOG("BASKET ASSIGNMENT", QString("External assignment synchronized: position=%1/%2, basket=%3 -> %4")
					.arg(position->getNumber()).arg(position->getIndex()).arg(position->getBasketTableId()).arg(basketId));
				position->setBasketTableIdInMemory(basketId);
				++changed;
			}
		}
	}
	LOG("BASKET CACHE", QString("Position assignments refreshed: databaseRows=%1, changed=%2, missionProtected=%3, ambiguousPositions=%4")
		.arg(rows.count()).arg(changed).arg(protectedChanges).arg(ambiguousAssignments.count()));
}
bool craneClass::isAssignmentReservedForMission(basketPositionClass* position, int basketId)
{
	// Protect the whole source/destination stack, as well as the carried basket.
	// Endpoints can remain set while a mission is being opened or closed.
	if (position == myBasketPos)
		return true;
	basketPositionClass* reserved[] = { activeFromBasketPos, activeToBasketPos, myBasketPos };
	for (int i = 0; i < 3; ++i)
	{
		if (!reserved[i])
			continue;
		if (position && position->getNumber() == reserved[i]->getNumber())
			return true;
		if (basketId > 0 && basketId == reserved[i]->getBasketTableId())
			return true;
	}
	return false;
}