/*
23) Write a Program to Find the Second Smallest Element in an Array
*/
#include<iostream>
using namespace std;

#define MAX 100

int secondSmallestElement(int[], int);
int* sortArray(int[], int);

int main()
{
	int size, arr[MAX];
	cin >> size;
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}
	cout << secondSmallestElement(sortArray(arr, size), size);
	return 0;
}

int* sortArray(int arr[], int size)
{
	int temp;
	bool flag;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < (size - i - 1); ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return arr;
}

int secondSmallestElement(int arr[], int size)
{
	for (int i = 1; i < size; ++i)
	{
		if (arr[i] != arr[0])
			return arr[i];
	}
}