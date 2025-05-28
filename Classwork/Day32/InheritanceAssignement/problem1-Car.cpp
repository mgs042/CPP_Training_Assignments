#include<iostream>
#include<Car.h>
using namespace std;

Car::Car(string mk, string mo, int n): Vehicle(mk, mo), numberOfDoors(n){}

void Car::honk()
{
	cout << "Honking the horn of the " << make << " " << model << endl;
}