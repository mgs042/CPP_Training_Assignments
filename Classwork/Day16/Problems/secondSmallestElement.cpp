#include<iostream>
using namespace std;

#define MAX 100

int secondSmallestElement(int[], int);

int main()
{
	int arr[MAX], size;
	cout << "Enter the size of the array: ";
	cin >> size;
	cout << "Enter the array elements: ";
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}
	cout << endl;
	cout << "Second Smallest Element: " << secondSmallestElement(arr, size) << endl;
	return 0;
}

int secondSmallestElement(int arr[], int size)
{
	int min1 = INT_MAX, min2 = INT_MAX;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] < min1)
		{
			min2 = min1;
			min1 = arr[i];
		}
		else if (arr[i] < min2 && arr[i]!=min1)
			min2 = arr[i];
	}
	return min2;
}