/*
Funtions
1. Biggest of array elements
2. get array sorted in ascending order
3. get array sorted in descending order

Whwnwver the size reaches capacity, the capacity is doubled
*/
#include<iostream>
using namespace std;
#define MAX 100

class ArrayManipulation
{
	int *arr;
	int size;
public:
	ArrayManipulation()
	{
		arr = nullptr;
		size = 0;
	}
	ArrayManipulation(int a[], int s)
	{
		arr = (int*)malloc(sizeof(int) * s);
		if (arr != nullptr)
		{
			for (int i = 0; i < s; ++i)
			{
				arr[i] = a[i];
			}
			size = s;
		}
		else
		{
			cout << "Memory Allocation failed" << endl;
		}
			
	}
	~ArrayManipulation()
	{
		free(arr);
	}
	void pushBack(int n)
	{
		int *ptr = (int*)realloc(arr, sizeof(int) * ++size);
		if (ptr != nullptr)
		{
			arr = ptr;
			arr[size - 1] = n;
		}
		else
		{
			cout << "Memory Allocation failed" << endl;
		}
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
	/*int m[MAX], n;
	cout << "Enter the size of array: ";
	cin >> n;
	cout << "Enter array elements: ";
	for (int i = 0; i < n; ++i)
	{
		cin >> m[i];
	}
	ArrayManipulation obj(m, n);*/
	ArrayManipulation obj;
	obj.pushBack(5);
	obj.pushBack(49);
	obj.pushBack(12);
	obj.pushBack(3);
	obj.pushBack(55);
	cout << "Biggest Element: " << obj.biggestElement() << endl;
	obj.sort();
	cout << "Sorted Array: ";
	obj.displayArr();
	obj.revSort();
	cout << "Reverse Sorted Array: ";
	obj.displayArr();
	return 0;
}