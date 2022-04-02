#include "Mercedes.h"

Mercedes::Mercedes() {
	this->FuelCapacity = 100;
	this->FuelConsumption = 6;
}

unsigned Mercedes::AverageSpeed(Weather weather)
{
	if (weather == Weather::Sunny)
		return 140;
	else if (weather == Weather::Rainy)
		return 90;
	else
		return 60;
}