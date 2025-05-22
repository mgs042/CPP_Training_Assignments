/*
Funtions
1. Biggest of array elements
2. get array sorted in ascending order
3. get array sorted in descending order

*/
#include<iostream>
using namespace std;
#define MAX 100

class ArrayManipulation
{
	int *arr;
	int size;
public:
	ArrayManipulation(int a[], int s)
	{
		arr = new int[s];
		for (int i = 0; i < s; ++i)
		{
			arr[i] = a[i];
		}
		size = s;
	}
	void displayArr()
	{
		for (int i = 0; i < size; ++i)
			cout << arr[i] << " ";
		cout << endl;
	}
	int biggestElement()
	{
		int max = INT_MIN;
		for (int i = 0; i < size; i++)
		{
			if (max < arr[i])
				max = arr[i];
		}
		return max;
	}
	void sort()
	{
		for (int i = 0; i < size; ++i)
		{
			for (int j = 0; j < size - i - 1; ++j)
			{
				if (arr[j] > arr[j + 1])
				{
					arr[j] = arr[j] ^ arr[j + 1];
					arr[j+1] = arr[j] ^ arr[j + 1];
					arr[j] = arr[j] ^ arr[j + 1];
				}
			}
		}
	}
	void revSort()
	{
		for (int i = 0; i < size; ++i)
		{
			for (int j = 0; j < size - i - 1; ++j)
			{
				if (arr[j] < arr[j + 1])
				{
					arr[j] = arr[j] ^ arr[j + 1];
					arr[j + 1] = arr[j] ^ arr[j + 1];
					arr[j] = arr[j] ^ arr[j + 1];
				}
			}
		}
	}
};

int main()
{
	int m[MAX], n;
	cout << "Enter the size of array: ";
	cin >> n;
	cout << "Enter array elements: ";
	for (int i = 0; i < n; ++i)
	{
		cin >> m[i];
	}
	ArrayManipulation obj(m, n);
	cout << "Biggest Element: " << obj.biggestElement() << endl;
	obj.sort();
	cout << "Sorted Array: ";
	obj.displayArr();
	obj.revSort();
	cout << "Reverse Sorted Array: ";
	obj.displayArr();
	return 0;
}