basketPositionClass* positionListClass::getFreeToRecievePos(basketPositionClass* incomingPos, QString* rejectionReason)
{
	if (rejectionReason) rejectionReason->clear();
	const auto reject = [rejectionReason](const QString& reason) -> basketPositionClass* {
		if (rejectionReason) *rejectionReason = reason;
		return NULL;
	};
	if (!incomingPos)
		return reject(tr("No source basket selected"));
	if (isLockedToRecieve)
		return reject(tr("Position is locked to receive by the PLC"));

	if (isBasketPositionYours(incomingPos))
		return reject(tr("Source basket is already in this position"));

	// T1, T4 and F material must bypass all aging-oven load positions.
	// Apply this while selecting a destination so automatic routing continues
	// looking for a valid buffer instead of repeatedly proposing a blocked move.
	if (!incomingPos->canMoveToPosition(mainPosId))
		return reject(tr("Selected basket contains T1, T4 or F material; oven loading is not allowed"));
	
	basketPositionClass* ans = NULL;
	
	//is same type?
	if (incomingPos && (incomingPos->getTypeEnum() == BASKET_NORMAL) && (!(typeEnumeration&TYPE_NORMAL)))
		return reject(tr("Normal baskets are not accepted"));

	if (incomingPos && (incomingPos->getTypeEnum() == BASKET_SCRAP) && (!(typeEnumeration&TYPE_SCRAP)))
		return reject(tr("Scrap baskets are not accepted"));
	
	//contents
	if (incomingPos && (incomingPos->getTypeEnum() == BASKET_NORMAL))
	{
		if ((incomingPos->getContentsEnum() == BASKET_CONTENS_NONE) && (!(typeEnumeration&TYPE_EMPTY)))
			return reject(tr("Empty baskets are not accepted"));

		if ((incomingPos->getContentsEnum() == BASKET_CONTENS_LESS_THAN_20) && (!(typeEnumeration&TYPE_PROFILES20)))
			return reject(tr("20-foot material is not accepted"));

		if ((incomingPos->getContentsEnum() == BASKET_CONTENS_LESS_THAN_24) && (!(typeEnumeration&TYPE_PROFILES24)))
			return reject(tr("24-foot material is not accepted"));

		if ((incomingPos->getContentsEnum() == BASKET_CONTENS_LESS_THAN_30) && (!(typeEnumeration&TYPE_PROFILES30)))
			return reject(tr("30-foot material is not accepted"));

		if (incomingPos->getContentsEnum() == BASKET_CONTENS_MORE_THAN_30)
			return reject(tr("Material exceeds 30 feet"));
	}
	
	//is a basket in the column full/empty and the incoming is empty/full (this is for the empty buffer positions when puting 20 feet)
	if ((mainPosId == 300) || (mainPosId == 310) || (mainPosId == 320) || (mainPosId == 330) || (mainPosId == 340) || (mainPosId == 350) || (mainPosId == 360) || (mainPosId == 370) || (mainPosId == 380) || (mainPosId == 390))  //only in empty buffer possitions
	{
		if ((incomingPos->hasContents()) && (!canTakeFullBasket()))
			return reject(tr("Empty baskets obstruct a loaded basket"));

		if ((!incomingPos->hasContents()) && (!canTakeEmptyBasket()))
			return reject(tr("Loaded baskets obstruct an empty basket"));
	}

	// when puting 20 feet in empty buffer go up to the third floor
	if ((mainPosId == 300) || (mainPosId == 310) || (mainPosId == 320) || (mainPosId == 330) || (mainPosId == 340) || (mainPosId == 350) || (mainPosId == 360) || (mainPosId == 370) || (mainPosId == 380) || (mainPosId == 390) ||
		(mainPosId == 800) || (mainPosId == 820) || (mainPosId == 840) || (mainPosId == 860) || (mainPosId == 880))  //only in empty buffer possitions
	{
		if ((incomingPos->hasContents()) && (getNumberOfBaskets() >= 3))
			return reject(tr("Loaded baskets are limited to three levels in this buffer"));
	}

	//is Something Obstructing the way?
	if (isSomethingObstructingThePositionsWay(incomingPos))
		return reject(tr("Another position obstructs the crane path"));

	//isAConcurrentPositionFull?
	if (isAConcurrentPositionFull())
		return reject(tr("A concurrent position is occupied"));

	//is recieving mine?
	if (incomingPos)
	{
		for (int i = 0; i < basketPositions.count(); i++)
		{
			if (basketPositions[i] == incomingPos)
			{
				return reject(tr("Source basket is already in this position"));
			}
		}
	}

	//is empty?
	for (int i = 0; i < basketPositions.count(); i++)
	{
		if (!basketPositions[i]->hasBasket())
		{
			if (!basketPositions[i]->getLocked())  //if the first empty is locked then return NULL
				ans = basketPositions[i];
			break;
		}
	}

	if (!ans && rejectionReason) {
		*rejectionReason = tr("No empty slot is available");
		for (int i = 0; i < basketPositions.count(); ++i) {
			if (!basketPositions[i]->hasBasket()) {
				*rejectionReason = tr("First empty slot %1 is locked; higher slots cannot be used").arg(basketPositions[i]->getPlcId());
				break;
			}
		}
	}
	return ans;
}