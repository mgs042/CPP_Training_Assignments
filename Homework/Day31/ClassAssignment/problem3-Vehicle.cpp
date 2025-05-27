#include<iostream>
#include<string>
#include<Vehicle.h>
using namespace std;

Vehicle::Vehicle(string vehicleId, string type, int ratePerKm)
{
	this->vehicleId = vehicleId;
	this->type = type;
	this->ratePerKm = ratePerKm;
}

int Vehicle::calculateFare(int distance)
{
	return this->ratePerKm * distance;
}

int Vehicle::calculateFare(int distance, int days)
{
	if (days < 2)
		return this->ratePerKm * distance;
	else
		return (this->ratePerKm * distance) - (this->ratePerKm * distance) * 0.1;
}

void Vehicle::display(int distance, int days)
{
	cout << "Fare without discount: " << calculateFare(distance) << endl;
	cout << "Fare with long-term discount: " << calculateFare(distance, days) << endl;
}