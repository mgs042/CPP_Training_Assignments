/*
3. Check if a Year is a Leap Year
Problem:
Write a function to check whether a given year is leap year or not.

Hint:
Leap year if:

Divisible by 4 and not divisible by 100, or
Divisible by 400.
Use logical operators && and ||.
*/

#include<iostream>
using namespace std;

bool checkLeapYear(int);

int main()
{
	int n;
	cout << "Enter the year: ";
	cin >> n;
	cout << endl;
	if (checkLeapYear(n))
		cout << "It is a Leap Year" << endl;
	else
		cout << "It is not a Leap Year" << endl;
	return 0;

}

bool checkLeapYear(int year)
{
	return ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
}