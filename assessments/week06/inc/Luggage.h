#pragma once
#include<string>
using namespace std;
class Luggage
{
private:
	string passengerName;
	int weight;
	int limit;
	int findDifference();
public:
	Luggage(string, int);
	void checkOverweight();
};