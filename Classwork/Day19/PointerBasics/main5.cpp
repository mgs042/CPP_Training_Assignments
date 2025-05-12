#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int* ptr = nullptr, * temp = nullptr;
	int size;
	cout << "Enter no. of elements: ";
	cin >> size;
	ptr = (int*)malloc(sizeof(int) * size);
	temp = ptr;
	for (int i = 0; i < size; ++i)
	{
		cout << "enter the value: ";
		cin >> *ptr;
		ptr++;
	}
	ptr = temp;
	for (int i = 0; i < size; ++i)
	{
		cout << ptr[i] << " ";

	}
	return 0;
}