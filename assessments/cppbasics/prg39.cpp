/*
39) Write a Program to Calculate the Factorial of a Number Using Recursion
*/

#include<iostream>
using namespace std;

int factorial(int);

int main()
{
	int num;
	cin >> num;
	cout << factorial(num);
	return 0;
}

int factorial(int n)
{
	if (n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}