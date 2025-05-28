#pragma once
#include<string>
using namespace std;

class Vehicle
{
protected:
	string make;
	string model;
public:
	Vehicle();
	Vehicle(string, string);
	void start();
	void stop();
};