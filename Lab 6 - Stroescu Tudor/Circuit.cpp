#include "Circuit.h"
#include <iostream>



Circuit::Circuit()
{
	this->CarCount = 0;
}

void Circuit::SetLength(int length)
{
	this->Length = length;
}

void Circuit::SetWeather(Weather weather)
{
	this->weather = weather;
}

void Circuit::AddCar(Car* car)
{
	this->Cars[CarCount] = car;
	CarCount++;
}

void Circuit::Race()
{
	for (int i = 0; i < CarCount; i++)
	{
		double liters = (double)(Cars[i]->FuelConsumption / 100) * Length;
		double time = (double)(Length / (Cars[i]->AverageSpeed(weather)));
		if (liters < Cars[i]->FuelCapacity)
			Results[i] = -69;
		else
			Results[i] = time;
		SortResults();
	}
}

void Circuit::SortResults()
{
	for (int i = 0; i < CarCount - 1; i++)
		for (int j = i + 1; j < CarCount; j++)
			if (this->Results[i] > this->Results[j])
				std::swap(Results[i], Results[j]);
}

void Circuit::ShowFinalRanks()
{
	std::cout << "Final Ranks:" << "\n";
	for (unsigned i = 0; i < CarCount; i++)
		if(Results[i] != -69)
			std::cout << i+1 << ". " << Results[i] << std::endl;
}

void Circuit::ShowWhoDidNotFinish()
{
	std::cout << "Did not finish:" << "\n";
	int count = 0;
	for (unsigned i = 0; i < CarCount; i++)
		if (Results[i] == -69)
			count++;
	std::cout << count;
			
}
