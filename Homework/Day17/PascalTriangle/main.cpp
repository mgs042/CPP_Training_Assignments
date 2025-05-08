#include<iostream>
using namespace std;

#define MAX 100

void calculatePascalTriangle(int [][MAX], int);
void printPascalTriangle(int[][MAX], int);

int main()
{
	int n, arr[MAX][MAX];
	cout << "Enter the value of n: ";
	cin >> n;
	cout << endl;
	calculatePascalTriangle(arr, n);
	printPascalTriangle(arr, n);
	return 0;
}

void calculatePascalTriangle(int arr[][MAX], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			if (j == 0 || j == i)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
}

void printPascalTriangle(int arr[][MAX], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n - i + 2; ++j)
			cout << "  ";
		for (int k = 0; k <= i; ++k)
		{
			if (arr[i][k+1] < 10)
				cout << arr[i][k] << "   ";
			else
				cout << arr[i][k] << "  ";
		}
		cout << endl;
	}
}