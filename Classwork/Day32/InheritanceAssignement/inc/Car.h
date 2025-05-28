#pragma once
#include<Vehicle.h>
class Car : public Vehicle
{
private:
	int numberOfDoors;
public:
	Car(string, string, int);
	void honk();
};