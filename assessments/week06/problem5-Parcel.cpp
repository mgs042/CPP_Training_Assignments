#include<iostream>
#include<string>
#include<Parcel.h>
using namespace std;

Parcel::Parcel(string id, int w, int d)
{
	parcelId = id;
	weight = w;
	distance = d;
	cost = calculateCost();
}

string Parcel::getParcelId()
{
	return parcelId;
}

int Parcel::getCost()
{
	return cost;
}

int Parcel::calculateCost()
{
	if (weight > 5)
		return 8 * distance;
	else if (weight > 0 && weight <= 5)
		return 5 * distance;
	else
	{
		cout << "Invalid Weight" << endl;
		return 0;
	}
		
}

void Parcel::printCost()
{
	cout << "Parcel " << getParcelId() << " | Cost: $" << getCost() << endl;
}