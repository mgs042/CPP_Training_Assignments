/*
19) Write a Program to Find the Nth Term of the Fibonacci Series
*/
#include<iostream>
using namespace std;

int findFibonacciTerm(int);

int main()
{
	int n;
	cin >> n;
	cout << findFibonacciTerm(n);
	return 0;
}

int findFibonacciTerm(int num)
{
	if (num == 1)
		return 0;
	else if (num == 2)
		return 1;
	else
	{
		return findFibonacciTerm(num - 1) + findFibonacciTerm(num - 2);
	}
}