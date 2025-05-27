#include<iostream>
#include<Vehicle.h>
#include<Car.h>
#include<Bike.h>
using namespace std;

int main()
{
	Vehicle obj("C100", "Car", 15);
	obj.display(100, 3);
	return 0;
}