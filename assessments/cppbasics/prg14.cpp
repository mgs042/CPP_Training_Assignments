/*
14) Write a Program to Find the Factorial of a Number Using Loops
*/

#include<iostream>
using namespace std;

int factorial(int);

int main()
{
	int n;
	cin >> n;
	cout << factorial(n);
	return 0;
}

int factorial(int n)
{
	int pro = 1;
	for (int i = n; i > 1; --i)
		pro *= i;
	return pro;
}