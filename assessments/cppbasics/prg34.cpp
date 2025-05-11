/*
34) Write a Program to Print Floyd's Triangle
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
	int j = 1;
	for (int i = 1; j<=n; ++i)
	{
		for (int k = 1; k <= i; ++k)
		{
			cout << j++ << " ";
			if (j == n + 1)
				break;
		}
		cout << endl;
	}

}