#include "Toyota.h"

Toyota::Toyota()
{
	this->FuelCapacity = 80;
	this->FuelConsumption = 8;
}
unsigned Toyota::AverageSpeed(Weather weather)
{
	if (weather == Weather::Sunny)
		return 115;
	else if (weather == Weather::Rainy)
		return 70;
	else
		return 550;
}
