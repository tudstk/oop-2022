#pragma once
#include "Car.h"

class Circuit {
private:
	Car *Cars[30];
	Weather weather;
	int Length;
	int CarCount;
	double Results[30];
public:
	Circuit();
	void SetLength(int length);
	void SetWeather(Weather weather);
	void AddCar(Car* car);
	void Race();
	void SortResults();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};
