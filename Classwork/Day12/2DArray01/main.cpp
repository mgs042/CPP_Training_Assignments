#include<iostream>
using namespace std;

#define ROW 4
#define COL 4

bool duplicateCheck(int *);
bool rowSumCheck(int *, int);
bool colSumCheck(int *, int);
bool diagonalSumCheck(int *, int);


int main()
{
	int arr[ROW][COL], refSum = 0;
	cout << "Enter the values of the Array: " << endl;
	for (int i = 0; i < ROW; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			cout << "Enter the value of arr[" << i << "][" << j << "]: ";
			cin >> arr[i][j];
		}
	}
	cout << endl << endl << "\tMatrix" << endl;
	for (int i = 0; i < ROW; ++i)
	{
		cout << "\t";
		for (int j = 0; j < COL; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int j = 0; j < COL; ++j)
		refSum += arr[0][j];

	if (duplicateCheck(&arr[0][0]) && rowSumCheck(&arr[0][0], refSum) && colSumCheck(&arr[0][0], refSum) && diagonalSumCheck(&arr[0][0], refSum))
	{
		cout << "This is a Magic Square !!!" << endl;
	}
	else
	{
		cout << "This is not a Magic Square" << endl;
	}
	return 0;
}

bool duplicateCheck(int* ptr)
{
	int* ptr2;
	for (int i = 0; i < (ROW * COL); ++i, ptr++)
	{
		ptr2 = ptr+1;
		for (int j = i; j < (ROW * COL); ++j, ptr2++)
		{
			if (*ptr2 == *ptr)
			{
				cout << "Duplicate Elements found" << *ptr << endl;
				return false;
			}
		}

	}
	cout << "No Duplicate Elements found" << endl;
	return true;
}


bool rowSumCheck(int* ptr, int refSum)
{
	int sum;
	for (int i = 0; i < ROW; ++i)
	{
		sum = 0;
		for (int j = 0; j < COL; ++j)
		{
			sum += ptr[(i * COL) + j];
		}
		if (sum != refSum)
		{
			cout << "Row Sum: " << sum << endl;
			return false;
		}
	}
	cout << "Row Sum: " << sum << endl;
	return true;
}

bool colSumCheck(int* ptr, int refSum)
{
	int sum;
	for (int i = 0; i < COL; ++i)
	{
		sum = 0;
		for (int j = 0; j < ROW; ++j)
		{
			sum += ptr[i+(j*ROW)];
		}
		if (sum != refSum)
		{
			cout << "Col Sum: " << sum << endl;
			return false;
		}
	}
	cout << "Col Sum: " << sum << endl;
	return true;
}

bool diagonalSumCheck(int* ptr, int refSum)
{
	int sum=0;
	for (int i = 0; i < ROW; i++)
	{
		sum += ptr[(i + ROW)];
	}
	if (sum != refSum)
	{
		cout << "Diag1 Sum: " << sum << endl;
		return false;
	}
	cout << "Diag1 Sum: " << sum << endl;
	sum = 0;
	for (int i = 0; i < ROW; i++)
	{
		sum += ptr[(i * ROW) + (ROW - i - 1)];
	}
	if (sum != refSum)
	{
		cout << "Diag2 Sum: " << sum << endl;
		return false;
	}
	cout << "Diag2 Sum: " << sum << endl;
	return true;
}