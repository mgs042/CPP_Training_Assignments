#pragma once
#include<Cars.h>
#include<string>
using namespace std;
class Audi :private Cars
{
	string model;
public:
	Audi(float, int, int, string, string);
	void display();
};