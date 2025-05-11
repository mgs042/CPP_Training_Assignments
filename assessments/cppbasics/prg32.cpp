/*
32) Write a Program to print an Inverted Pyramid
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
	for (int i = n; i >= 1; --i)
	{
		for (int j = 1; j <= (n - i); ++j)
			cout << " ";
		for (int k = 1; k <= i; ++k)
			cout << "* ";
		cout << endl;
	}

}