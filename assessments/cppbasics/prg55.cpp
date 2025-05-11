/*
55) Write a program in C++ that converts kilometers per hour to miles per hour.
*/

#include<iostream>
using namespace std;

float distConversion(float dis);

int main()
{
	float d;
	cin >> d;
	cout << distConversion(d);
	return 0;
}

float distConversion(float dis)
{
	return dis * 0.62137119;
}