/*
13) Write a Program to Find the Sum of the First N Natural Numbers
*/
#include<iostream>
using namespace std;

int sumOfNaturalNumbers(int);

int main()
{
	int n;
	cin >> n;
	cout << sumOfNaturalNumbers(n);
	return 0;
}

int sumOfNaturalNumbers(int n)
{
	if (n == 0)
		return 0;
	else
	{
		return n + sumOfNaturalNumbers(n - 1);
	}
}