#include<Yamaha.h>
#include<iostream>
using namespace std;

Yamaha::Yamaha(float p, int nc, int ng, int nw, string mk) : Motorcycles(p, nc, ng, nw), make(mk) {}

void Yamaha::display()
{
	cout << "================================" << endl;
	cout << "Yamaha" << endl;
	cout << "Price: " << price << endl;
	cout << "Number of Cylinders: " << numberOfCylinders << endl;
	cout << "Number of Gears: " << numberOfGears << endl;
	cout << "Number of Wheels: " << numberOfWheels << endl;
	cout << "Make: " << make << endl;
	cout << "================================" << endl << endl;

}