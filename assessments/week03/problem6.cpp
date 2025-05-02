/*
Problem Statement 6
You are given an array arr[] of size N containing positive integers.
Your task is to reverse every sub-array of size K.

If the number of elements left at the end is less than K,
reverse all of them as is.
*/

#include<iostream>
using namespace std;

#define MAX 100

void reverseSubArray(int*, int, int);

int main()
{
	int arr[MAX], size, k;
	cout << "Enter the size of the array: ";
	cin >> size;
	for (int i = 0; i < size; ++i)
	{
		cout << "Enter the value of arr[" << i << "]: "; //get the array elements
		cin >> arr[i];
	}
	cout << "Enter the value of k: ";
	cin >> k;
	reverseSubArray(arr, size, k);
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	return 0;
}

void reverseSubArray(int* ptr, int size, int k)
{
	int temp, i, j;
	if (size <= k)
	{
		for (j = 0; j < size / 2; ++j)
		{
			temp = ptr[j];
			ptr[j] = ptr[(size - 1 - j)];
			ptr[(size - 1 - j)] = temp;
		}
		return;
	}
	else
	{
		for (i = 0; i <= size - k; i += k)
		{
			for (j = 0; j < k / 2; ++j)
			{
				temp = ptr[i + j];
				ptr[i + j] = ptr[i + (k - 1 - j)];
				ptr[i + (k - 1 - j)] = temp;
			}
		}
		if (i < size-1)
		{
			for (j = 0; j < (size-i) / 2; ++j)
			{
				temp = ptr[i+j];
				ptr[i+j] = ptr[(size - 1 - j)];
				ptr[(size - 1 - j)] = temp;
			}
		}
		
	}
}