/*
Problem 2: Sum of First N Natural Numbers
Problem Statement:
Write a recursive function to find the sum of the first N natural numbers.
*/

#include<iostream>
using namespace std;

int sumOfNaturalNumbers(int);

int main()
{
	int n;
	cout << "Enter the value of N: ";
	cin >> n;
	cout << endl;
	cout << "The sum of first " << n << " natural numbers is: " << sumOfNaturalNumbers(n) << endl;
}

int sumOfNaturalNumbers(int n)
{
	if (n == 1)
		return 1;
	else
		return n + sumOfNaturalNumbers(n-1);
}