/*
1) Write a C++ Program to Check Whether a Number is a Positive or Negative Number
*/

#include<iostream>
using namespace std;

bool checkPositiveOrNegative(int);

int main()
{
	int num;
	cin >> num;
	if (checkPositiveOrNegative(num))
	{
		cout << "Positive";
	}
	else
	{
		cout << "Negative";
	}
	return 0;
}

bool checkPositiveOrNegative(int n)
{
	return n >= 0;
}