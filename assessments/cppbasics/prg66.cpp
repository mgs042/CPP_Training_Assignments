/*
66) Write a program in C++ to calculate the volume of a cylinder.
*/
#include<iostream>
using namespace std;

#define PI 3.14

float volumeCylinder(float, float);

int main()
{
	float r, h;
	cin >> r >> h;
	cout << volumeCylinder(r, h);
	return 0;
}

float volumeCylinder(float r, float h)
{
	return PI * r * r * h;
}