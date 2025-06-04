/*
4. Find the Second Last Digit of a Number
Problem:
Given a positive integer, find its second last digit.

Hint:

First, divide number by 10 (n/10) to remove the last digit.
Then get last digit of the result using modulo (% 10).
*/
#include<iostream>
using namespace std;

int secondLastDigit(int);

int main()
{
	int n;
	cout << "Enter the input: ";
	cin >> n;
	cout << endl;
	cout << "The Second last digit is: " << secondLastDigit(n) << endl;
	return 0;
}

int secondLastDigit(int num)
{
	num /= 10;
	return num % 10;
}
