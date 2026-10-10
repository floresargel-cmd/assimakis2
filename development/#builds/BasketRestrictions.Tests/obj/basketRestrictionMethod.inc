bool basketPositionClass::canMoveToPosition(int destinationNumber)
{
	if (!hasNonAgeableTemperMaterial())
		return true;

	return !BasketCrane::Configuration::ConfigurationManager::Instance()
		.RestrictedBasketLocations().contains(QString::number(destinationNumber));
}