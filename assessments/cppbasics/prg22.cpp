/*
22) Write a Program to Find the Smallest and Largest Element in an Array
*/

#include<iostream>
using namespace std;

#define MAX 100

int main()
{
	int arr[MAX], size, min = INT_MAX, max = INT_MIN;
	cin >> size;
	for (int i = 0; i < size; ++i)
		cin >> arr[i];
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	cout << "Min: " << min << " Max: " << max;
	return 0;

}