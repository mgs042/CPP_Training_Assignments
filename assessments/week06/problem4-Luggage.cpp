#include<iostream>
#include<string>
#include<math.h>
#include<Luggage.h>
using namespace std;

Luggage::Luggage(string name, int w)
{
	passengerName = name;
	weight = w;
	limit = 20.0;
}

int Luggage::findDifference()
{
	return limit - weight;
}

void Luggage::checkOverweight()
{
	int diff = findDifference();
	if (diff < 0)
	{
		cout << "Overweight! Exceeded by " << abs(diff) << " kg." << endl;
	}
	else
	{
		cout << "Luggage within limit." << endl;
	}
}