#include<iostream>
using namespace std;

#define MAX 100

//void removeDuplicates(int[], int &);
int removeDuplicates(int[], int);

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
	//removeDuplicates(arr, size);
	int newSize = removeDuplicates(arr, size);
	cout << "After removing duplicates: ";
	for (int i = 0; i < newSize; ++i)
		cout << " " << arr[i];
	return 0;
}

//void removeDuplicates(int arr[], int &size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		for (int j = i + 1; j < size;)
//		{
//			if (arr[j] == arr[i])
//			{
//				for (int k = j + 1; k < size; ++k)
//				{
//					arr[k - 1] = arr[k];
//				}
//				size--;
//			}
//			else
//			{
//				j++;
//			}
//		}
//	}
//}

int removeDuplicates(int arr[], int size)
{
	int newSize = 0;
	bool isDuplicate;
	for (int i = 0; i < size; ++i)
	{
		bool isDuplicate = false;
		for (int j = i + 1; j < size; ++j)
		{
			if (arr[i] == arr[j])
			{
				isDuplicate = true;
				break;
			}
		}
		if (!isDuplicate)
		{
			arr[newSize++] = arr[i];
		}
	}
	return newSize;
}