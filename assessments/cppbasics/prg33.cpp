/*
33) Write a Program to Print a Triangle Star Pattern
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
		for (int k = 1; k <= i; ++k)
			cout << "*";
		cout << endl;
	}

}

