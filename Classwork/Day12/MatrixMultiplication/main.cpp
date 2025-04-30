/*
Matrix Multiplication
*/
#include<iostream>
using namespace std;

# define ROW1 4
# define COL1 2
# define ROW2 2
# define COL2 3

void matrixMultiplication();
int a[ROW1][COL1], b[ROW2][COL2], c[ROW1][COL2], sum = 0;

int main()
{
	if (COL1 != ROW2)
	{
		cout << "These matrices cannot be multiplied" << endl;
		exit(0);
	}
	cout << "\tMATRIX 1" << endl;
	for (int i = 0;i < ROW1; ++i)
	{
		for (int j = 0; j < COL1; ++j)
		{
			cout << "Enter the value of a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
	cout << endl;
	cout << "\tMATRIX 2" << endl;
	for (int i = 0;i < ROW2; ++i)
	{
		for (int j = 0; j < COL2; ++j)
		{
			cout << "Enter the value of b[" << i << "][" << j << "]: ";
			cin >> b[i][j];
		}
	}
	matrixMultiplication();
	cout << endl;
	cout << "\tPRODUCT" << endl;
	for (int i = 0;i < ROW1; ++i)
	{
		cout << "\t";
		for (int j = 0; j < COL2; ++j)
		{
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}

void matrixMultiplication()
{
	//Matrix Multiplication
	for (int i = 0; i < ROW1; ++i)
	{
		for (int j = 0; j < COL2; ++j)
		{
			sum = 0;
			for (int k = 0; k < COL1; ++k)
			{
				sum = sum + (a[i][k] * b[k][j]);
			}
			c[i][j] = sum;
		}
	}
}