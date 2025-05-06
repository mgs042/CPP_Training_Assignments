#include<iostream>
using namespace std;

bool isLeapYear(int);

int main()
{
	int year;
	cout << "Enter the year: ";
	cin >> year;
	cout << endl;
	if (isLeapYear(year))
	{
		cout << "Is a leap year" << endl;
	}
	else
	{
		cout << "Is not a leap year" << endl;
	}
	return 0;
}

bool isLeapYear(int year)
{
	return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
}
