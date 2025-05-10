/*
30) Write a Program to Print the Rotated Hourglass Pattern
*/
#include<iostream>
using namespace std;

void printPattern(int);

int main()
{
	int n;
	cin >> n;
	printPattern(n);
	return 0;
}

void printPattern(int n)
{
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
			cout << '*';
		for (int k = 1; k <= 2 * (n - i); ++k)
			cout << ' ';
		for (int j = 1; j <= i; ++j)
			cout << '*';
		cout << endl;
	}
	for (int i = n-1; i >= 1; --i)
	{
		for (int j = 1; j <= i; ++j)
			cout << '*';
		for (int k = 1; k <= 2 * (n - i); ++k)
			cout << ' ';
		for (int j = 1; j <= i; ++j)
			cout << '*';
		cout << endl;
	}
}