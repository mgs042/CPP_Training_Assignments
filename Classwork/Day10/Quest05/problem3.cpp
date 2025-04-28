/*
Problem 3: Find nth Fibonacci Number
Problem Statement:
Write a recursive function to return the nth Fibonacci number.
(Fibonacci series: 0, 1, 1, 2, 3, 5, 8, ...)
*/
#include<iostream>
using namespace std;

int NthFibbonacci(int, int, int);

int main()
{
	int n;
	cout << "Enter the input: ";
	cin >> n;
	cout << endl;
	if (n <= 0)
	{
		cout << "Invalid Input" << endl;
	}
	else if (n == 1)
	{
		cout << "Nth Fibbonacci Number: 0" << endl;
	}
	else if (n == 2)
	{
		cout << "Nth Fibbonacci Number: 1" << endl;

	}
	else
	{
		cout << "Nth Fibbonacci Number: " << NthFibbonacci(0, 1, n - 2) << endl;

	}
	return 0;

}

int NthFibbonacci(int a, int b, int n)
{
	if (n == 1)
	{
		cout << endl;
		return a + b;
	}
	else
	{
		NthFibbonacci(b, a + b, n - 1);
	}
}