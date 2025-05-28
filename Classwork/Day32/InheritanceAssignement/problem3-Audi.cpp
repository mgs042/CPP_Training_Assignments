#include<Audi.h>
#include<iostream>
using namespace std;

Audi::Audi(float p, int sc, int nd, string ft, string mo): Cars(p, sc, nd, ft), model(mo){}

void Audi::display()
{
	cout << "================================" << endl;
	cout << "Audi" << endl;
	cout << "Price: " << price << endl;
	cout << "Seating Capacity: " << seatingCapacity << endl;
	cout << "Number of Doors: " << numberOfDoors << endl;
	cout << "Fuel Type: " << fuelType << endl;
	cout << "Model: " << model << endl;
	cout << "================================" << endl << endl;

}