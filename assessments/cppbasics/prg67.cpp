/*
67) Write a program in C++ to find the area of any triangle using Heron's Formula.
*/
#include<iostream>
#include<math.h>
using namespace std;

float areaTriangle(int, int, int);

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << areaTriangle(a, b, c);
	return 0;
}

float areaTriangle(int a, int b, int c)
{
	float s = float (a + b + c) / 2;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}