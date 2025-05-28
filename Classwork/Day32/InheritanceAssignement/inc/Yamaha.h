#pragma once
#include<Motorcycles.h>
#include<string>
using namespace std;
class Yamaha :private Motorcycles
{
	string make;
public:
	Yamaha(float, int, int, int, string);
	void display();
};