#include<iostream>
using namespace std;

#define MAX 100

int sumOfArrayElements(int *, int);

int main()
{
	int size, arr[MAX];
	cout << "Enter the size of array: ";
	cin >> size;
	cout << "Enter the elements of the array: ";
	for (int i = 0; i < size; ++i)
		cin >> arr[i];
	cout << endl << "Sum of array elements: " << sumOfArrayElements(arr, size);
	return 0;

}

int sumOfArrayElements(int* ptr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i)
		sum += *(ptr++);
	return sum;
}