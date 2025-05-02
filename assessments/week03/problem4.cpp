/*
Problem Statement 4
You are given an array A of N positive or negative integers.
Your task is to find the first equilibrium position in the array.

An equilibrium position is an index i such that the sum of elements before index
i is equal to the sum of elements after index i.

Return the first equilibrium index (0-based indexing).
If no such index exists, return -1.
*/

#include<iostream>
using namespace std;

#define MAX 10

int findEquilibrium(int[], int); //to find the equilibrium

int main()
{
	int size, arr[MAX];
	cout << "Enter the size of the array: ";
	cin >> size;
	for (int i = 0; i < size; ++i)
	{
		cout << "Enter the value of arr[" << i << "]: "; //get the array elements
		cin >> arr[i];
	}
	cout << findEquilibrium(arr, size);
	return 0;
}

int findEquilibrium(int arr[], int size)
{
	int sumL=0, sumR=0;
	for (int i = 0;i < size;++i)
	{
		sumL = 0;
		sumR = 0;
		for (int j = 0; j < i; ++j) //find sum of left elements
		{
			sumL += arr[j];
		}
		for (int k = i+1; k < size; ++k) //sum of right elements
		{
			sumR += arr[k];
		}
		if (sumR == sumL)
		{
			return i;
		}
	}
	return -1;
}