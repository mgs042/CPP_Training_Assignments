#pragma once
#include<string>
using namespace std;
class Parcel
{
private:
	string parcelId;
	int weight;
	int distance;
	int cost;
	int calculateCost();
	string getParcelId();
	int getCost();
public:
	Parcel(string, int, int);
	void printCost();
};