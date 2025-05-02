/*
Problem Statement 5
You are given an array A of positive integers.
Your task is to find and print all the leaders in the array.

An element is considered a leader if it is greater than all elements to its right.
The rightmost element is always considered a leader.

Return the list of leaders in the same order as they appear from right to left in
the original array.
*/

#include<iostream>
using namespace std;

#define MAX 100

void printLeaders(int[], int);

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
	printLeaders(arr, size);
	return 0;
}

void printLeaders(int arr[], int size)
{
	int currentLeader = arr[size - 1];
	cout << currentLeader << " ";
	for (int i = size - 1; i >= 0; --i)
	{
		if (arr[i] > currentLeader)
		{
			currentLeader = arr[i];
			cout << currentLeader << " ";
		}
	}
	return;
}