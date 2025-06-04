#pragma once
#include<string>
using namespace std;

class Vehicle
{
protected:
	string vehicleId;
	string type;
	int ratePerKm;
	int calculateFare(int);
	int calculateFare(int, int);
public:
	Vehicle(string, string, int);
	void display(int, int);

};