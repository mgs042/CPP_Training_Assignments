/*
6. Check if the Sum of Two Numbers is Even
Problem:
Write a function that returns true if the sum of two integers is even.

Hint:

Sum the two numbers.
Check if (sum % 2 == 0).
*/
#include<iostream>
using namespace std;

bool checkSumEven(int, int);

int main()
{
	int a, b;
	cout << "Enter number 1: ";
	cin >> a;
	cout << "Enter number 2: ";
	cin >> b;
	cout << endl;
	if (checkSumEven(a, b))
		cout << "Sum is even" << endl;
	else
		cout << "Sum is not even" << endl;
	return 0;
}

bool checkSumEven(int a, int b)
{
	return (a + b) % 2 == 0;
}