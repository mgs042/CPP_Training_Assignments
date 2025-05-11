/*
54) Write a program in C++ to convert temperature in Fahrenheit to Celsius.
*/

#include<iostream>
using namespace std;

float tempConversion(float temp);

int main()
{
	float t;
	cin >> t;
	cout << tempConversion(t);
	return 0;
}

float tempConversion(float temp)
{
	return ((temp - 32) * 5) / 9;
}