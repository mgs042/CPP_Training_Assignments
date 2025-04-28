/*
10. Check if Three Angles can Form a Triangle
Problem:
Check if three given angles form a valid triangle.

Hint:
If sum of three angles == 180 degrees, return true.

Simple addition and comparison.
*/

#include<iostream>
using namespace std;

bool checkTriangle(float, float, float);

int main()
{
	float a, b, c;
	cout << "Enter the value of Angle 1: ";
	cin >> a;
	cout << "Enter the value of Angle 2: ";
	cin >> b;
	cout << "Enter the value of Angle 3: ";
	cin >> c;
	cout << endl;
	if (checkTriangle(a, b, c))
		cout << "Forms a triangle";
	else
		cout << "Does Not form a triangle";
	cout << endl;
	return 0;
}

bool checkTriangle(float x, float y, float z)
{
	return x + y + z == 180;
}