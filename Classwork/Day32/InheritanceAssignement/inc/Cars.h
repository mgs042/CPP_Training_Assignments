#pragma once
#include<Vehicles.h>
#include<string>
using namespace std;
class Cars : protected Vehicles
{
protected:
	int seatingCapacity;
	int numberOfDoors;
	string fuelType;
public:
	Cars(float, int, int, string);
};