/*
53) Write a program in C++ to find the area and circumference of a circle.
*/

#include<iostream>
using namespace std;

#define PI 3.14

float areaOfCircle(float r);
float circumferenceOfCircle(float r);

int main()
{
	float r;
	cin >> r;
	cout << "Area: " << areaOfCircle(r) << endl;
	cout << "Circumference: " << circumferenceOfCircle(r) << endl;
	return 0;
}

float areaOfCircle(float r)
{
	return PI * r * r;
}
float circumferenceOfCircle(float r)
{
	return 2 * PI * r;
}