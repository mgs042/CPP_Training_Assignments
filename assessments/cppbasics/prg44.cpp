/*
44) Write a Program to Check for the Equality of Two Numbers Without Using Arithmetic or Comparison Operator
*/

#include<iostream>
using namespace std;

bool checkEquality(int, int);

int main()
{
	int x, y;
	cin >> x >> y;
	if (checkEquality(x, y))
		cout << "Equal";
	else
		cout << "Not Equal";
	return 0;
}

bool checkEquality(int a, int b)
{
	return (a ^ b) == 0;
}