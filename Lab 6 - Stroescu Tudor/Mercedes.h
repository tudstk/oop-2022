#pragma once
#include "Car.h"

class Mercedes : public Car {
public:
	Mercedes();
	unsigned AverageSpeed(Weather weather);
};
