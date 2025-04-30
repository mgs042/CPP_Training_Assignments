/*
2-D Array Demo
*/

#include<iostream>
using namespace std;

#define ROW 3
#define COL 3

int main()
{
	int arr1[ROW][COL] = { {10,20,30},{40,50,60},{70,80,90} };
	int arr2[ROW][COL] = { 10,20,30,40,50,60,70,80,90 };
	int arr3[ROW][COL];

	for (int i = 0; i < ROW; ++i)
		for (int j = 0; j < COL; ++j)
			cout << "Address of arr[" << i << "][" << j << "]: " << (unsigned long int) & arr1[i][j] << " Value: " << arr1[i][j] << endl;
	cout << endl;
	cout << "===========================================================================" << endl<< endl;
	for (int i = 0; i < ROW; ++i) //for each row
	{
		for (int j = 0; j < COL; ++j) //for value in each col
		{
			cout << (unsigned long int) & arr2[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "===========================================================================" << endl << endl;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL;++j)
		{
			cout << "Enter the value of arr3[" << i << "][" << j << "]: ";
			cin >> arr3[i][j];
		}
	}
	for (int i = 0; i < ROW; ++i) //for each row
	{
		for (int j = 0; j < COL; ++j) //for value in each col
		{
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}
}