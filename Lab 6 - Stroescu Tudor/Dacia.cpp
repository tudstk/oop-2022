#include "Dacia.h"

Dacia::Dacia(){
	this->FuelCapacity = 50;
	this->FuelConsumption = 7;
}

 unsigned Dacia::AverageSpeed(Weather weather)
{
	 if (weather == Weather::Sunny)
		 return 70;
	 else if (weather == Weather::Rainy)
		 return 60;
	 else
		 return 50;
}