/*
15) Write a Program to Find a Leap Year or Not
*/
#include<iostream>
using namespace std;

bool isLeapYear(int);

int main()
{
	int year;
	cin >> year;
	if (isLeapYear(year))
	{
		cout << "Leap Year";
	}
	else
	{
		cout << "Not Leap Year";
	}
	return 0;
}

bool isLeapYear(int year)
{
	return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
}