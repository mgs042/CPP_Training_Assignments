/*
71) Pascal's Triangle
*/

#include<iostream>
using namespace std;

#define MAX 20

void pascalTriangle(int arr[][MAX], int n);

int main()
{
	int n, arr[MAX][MAX];
	cin >> n;
	pascalTriangle(arr, n);
	return 0;
}

void pascalTriangle(int arr[][MAX], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			if (j == 0 || j == i)
				arr[i][j] = 1;
			else
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int k = 0; k <= n-i; ++k)
			cout << " ";
		for (int j = 0; j <= i; ++j)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	
}