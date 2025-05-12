#include<iostream>
using namespace std;

void sortArray(int*, int);
void storeArray(int*, int);
void printArray(int*, int);
void* allocateArray(int);

int main()
{
	int* ptr = nullptr;
	int size;
	cout << "Enter the size: ";
	cin >> size;
	ptr = (int*)allocateArray(size);
	storeArray(ptr, size);
	cout << endl << "Original Array Values: ";
	printArray(ptr, size);
	sortArray(ptr, size);
	cout << endl << "Sorted Array Values: ";
	printArray(ptr, size);
	cout << endl;
	return 0;
}

void* allocateArray(int size)
{
	return malloc(sizeof(int) * size);
}

void printArray(int* ptr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << ptr[i] << " ";
	}
}
void storeArray(int* ptr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << "Enter element " << i + 1 << ": ";
		cin >> ptr[i];
	}
}
void sortArray(int* ptr, int size)
{
	bool flag;
	for (int i = 0; i < size; ++i)
	{
		flag = true;
		for (int j = 0; j < size-1-i; ++j)
		{
			if (ptr[j + 1] < ptr[j])
			{
				ptr[j] = ptr[j] ^ ptr[j + 1];
				ptr[j+1] = ptr[j] ^ ptr[j + 1];
				ptr[j] = ptr[j] ^ ptr[j + 1];
				flag = false;
			}
		}
		if (flag)
			break;
	}
}