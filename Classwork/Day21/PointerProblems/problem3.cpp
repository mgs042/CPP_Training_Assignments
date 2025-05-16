#include<iostream>
using namespace std;

#define MAX 100

int* reverseArray(int*, int);

int main()
{
	int size, arr[MAX];
	int* ptr = nullptr;
	cout << "Enter the size: ";
	cin >> size;
	cout << "Enter the array elements: ";
	for (int i = 0; i < size; ++i)
		cin >> arr[i];
	cout << endl;
	ptr = reverseArray(arr, size);
	cout << "Reversed Array: ";
	for (int i = 0; i < size; ++i)
		cout << *(ptr + i) << " ";
	return 0;
}

int* reverseArray(int* ptr, int size)
{
	int l = 0, r = size - 1;
	while (l < r)
	{
		*(ptr + l) = *(ptr + l) ^ *(ptr + r);
		*(ptr + r) = *(ptr + l) ^ *(ptr + r);
		*(ptr + l) = *(ptr + l) ^ *(ptr + r);
		l++;
		r--;
	}
	return ptr;
}