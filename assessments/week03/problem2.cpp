/*
Problem Statement 2
You are given a sorted array A of size N containing integers.
Every element in the array appears exactly twice, except for one element 
that appears only once.
Your task is to find and print that unique element.
*/

#include<iostream>
using namespace std;

#define MAX 100

int findUniqueElement(int [], int); //to find the unique non repeating element

int main()
{
	int size, arr[MAX];
	cout << "Enter the size of the array: "; //get the size of array
	cin >> size;
	for (int i = 0; i < size; ++i)
	{
		cout << "Enter the value of arr[" << i << "]: "; //get the array elements in sorted format
		cin >> arr[i];
	}

	cout << findUniqueElement(arr, size) << endl;
	return 0;
}

int findUniqueElement(int arr[], int size)
{
	int i;
	for (i = 0; i < size-1; i+=2)
	{
		if (arr[i] != arr[i + 1]) // in a sorted array the arr[i]=arr[i+1] for all duplicate elements
			break;
	}
	return arr[i];
}