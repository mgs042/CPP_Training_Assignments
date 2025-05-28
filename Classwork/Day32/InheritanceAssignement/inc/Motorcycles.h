#pragma once
#include<Vehicles.h>
class Motorcycles :protected Vehicles
{
protected:
	int numberOfCylinders;
	int numberOfGears;
	int numberOfWheels;
public:
	Motorcycles(float, int, int, int);
};