#include<iostream>
using namespace std;

#define MAX 100

void findMinMax(int[], int, int&, int&);

int main()
{
	int arr[MAX], size, min, max;
	cout << "Enter the size of the array: ";
	cin >> size;
	cout << "Enter the array elements: ";
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}
	cout << endl;
	min = arr[0];
	max = arr[0];
	findMinMax(arr, size, min, max);
	cout << "Minimum Element is: " << min << endl;
	cout << "Maximum Element is: " << max << endl;
	return 0;
}

void findMinMax(int arr[], int size, int& min, int& max)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
}