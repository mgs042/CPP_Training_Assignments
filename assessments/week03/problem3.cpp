/*
Problem Statement 3
You are given an array A of size N containing positive integers.
For each element in the array, count the number of elements to its right that are
smaller than the current element.

Your task is to compute and print a list of counts corresponding to each element.
*/
#include<iostream>
using namespace std;

#define MAX 100

int countSmallerElements(int [], int, int); //to count the smaller elements from the right of a particular index

int main()
{
	int arr[MAX], size;
	cout << "Enter the size of the array: ";
	cin >> size;
	for (int i = 0; i < size; ++i)
	{
		cout << "Enter the value of arr[" << i << "]: "; //get the array elements
		cin >> arr[i];
	}
	for (int i = 0; i < size; ++i)
	{
		cout << countSmallerElements(arr, size, i) << " "; //call using the array, its size and the current index
	}
	return 0;
}

int countSmallerElements(int arr[], int size, int i)
{
	int currentElement = arr[i], count = 0;
	for (int j = i + 1;j < size; ++j) //start from the right of the currentIndex i
	{
		if (arr[j] < currentElement)  //count the smaller elements
			count++;
	}
	return count;
}