#include<iostream>
#include<string>
using namespace std;
#include<Vehicle.h>

Vehicle::Vehicle()
{
	make = "Generic";
	model = "Vehicle";
}

Vehicle::Vehicle(string mk, string mo):make(mk), model(mo){}

void Vehicle::start()
{
	cout << "Starting the " << make << " " << model << endl;
}

void Vehicle::stop()
{
	cout << "Stopping the " << make << " " << model << endl;
}