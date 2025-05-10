/*
24) Write a Program to Calculate the Sum of Elements in an Array
*/
#include<iostream>
using namespace std;

#define MAX 100

int sumOfElements(int[], int);

int main()
{
	int size, arr[MAX];
	cin >> size;
	for (int i = 0; i < size; ++i)
		cin >> arr[i];
	cout << sumOfElements(arr, size);
	return 0;
}

int sumOfElements(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i)
		sum += arr[i];
	return sum;
}