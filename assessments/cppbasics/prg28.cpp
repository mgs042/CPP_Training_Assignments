/*
28) Write a Program to Print a Pyramid Pattern
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
		for (int k = 1; k <= (2 * i) - 1; ++k)
			cout << "*";
		cout << endl;
	}

}