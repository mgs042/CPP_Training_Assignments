/*
69) Write a Program to Implement Bubble Sort
*/
#include<iostream>
using namespace std;

#define MAX 100

void bubbleSort(int[], int);

int main()
{
	int size, arr[MAX];
	cin >> size;
	for (int i = 0; i < size; ++i)
		cin >> arr[i];
	
	bubbleSort(arr, size);

	for (int i = 0; i < size; ++i)
		cout << arr[i] << " ";
	return 0;

}

void bubbleSort(int arr[], int size)
{
	bool flag;
	for (int i = 0; i < size; ++i)
	{
		flag = true;
		for (int j = 0; j < size - i - 1; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				arr[j] = arr[j] ^ arr[j + 1];
				arr[j + 1] = arr[j] ^ arr[j + 1];
				arr[j] = arr[j] ^ arr[j + 1];
				flag = false;
			}			
		}
		if (flag)
			break;
	}
	
}