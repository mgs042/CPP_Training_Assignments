/*
31) Write a Program to Print a Simple Pyramid Pattern
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
		for (int j = 1; j <= (n - i); ++j)
			cout << " ";
		for (int k = 1; k <= i; ++k)
			cout << "* ";
		cout << endl;
	}

}

