/*
Problem 1: Print Numbers from N to 1
Problem Statement:
Write a recursive function to print numbers from N down to 1.
*/

#include<iostream>
using namespace std;

void printNumber(int);

int main()
{
	int n;
	cout << "Enter the input: ";
	cin >> n;
	cout << endl;
	printNumber(n);
}

void printNumber(int n)
{
	cout << n << endl;
	if (n - 1 == 0)
		return;
	else
		printNumber(--n);
}