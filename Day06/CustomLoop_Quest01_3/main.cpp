/*
3) Write a program to calculate area of circle taking input the radius of the circle
*/
#include<iostream>
#include<cmath>
using namespace std;

#define PI 3.14

int main()
{
	float radius, area;
	cout << "Enter the radius of the circle: ";
	cin >> radius;
	area = PI * pow(radius, 2);
	cout << endl << "Area of Circle: " << area << endl;
	return 0;
}