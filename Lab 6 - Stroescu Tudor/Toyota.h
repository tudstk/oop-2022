#pragma once
#include "Car.h"

class Toyota : public Car {
public:
	Toyota();
	unsigned AverageSpeed(Weather weather);
};