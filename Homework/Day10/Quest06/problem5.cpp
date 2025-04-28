/*
5. Convert Hours into Minutes and Seconds
Problem:
Write a function that converts hours into minutes and seconds.

Hint:

1 hour = 60 minutes.
1 minute = 60 seconds.
Multiply properly and print separately.
*/
#include<iostream>
using namespace std;

int convertToMin(int);
int convertToSec(int);

int main()
{
	int h;
	cout << "Enter the hour: ";
	cin >> h;
	cout << endl;
	cout << "Converted to Minutes: " << convertToMin(h) << endl;
	cout << "Converted to Seconds: " << convertToSec(h) << endl;
	return 0;
}

int convertToMin(int h)
{
	return h * 60;
}

int convertToSec(int h)
{
	return h * 3600;
}