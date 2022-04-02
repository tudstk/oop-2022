#pragma once
#include "Weather.h"

class Car {
public:
	int FuelCapacity;
	int FuelConsumption;
	virtual unsigned AverageSpeed(Weather weather) = 0;
};