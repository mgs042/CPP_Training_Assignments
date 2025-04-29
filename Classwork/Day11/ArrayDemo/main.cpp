/*
Demo of Arrays
*/

#include<iostream>
using namespace std;

int main()
{
	int arr[3];
	cout << "Address of arr[0]: " << (unsigned long) &arr[0] << endl;
	cout << "Address of arr[1]: " << (unsigned long) &arr[1] << endl;
	cout << "Address of arr[2]: " << (unsigned long) & arr[2] << endl;
	cout << endl;
	printf("\nAddress of arr[0]: %u", &arr[0]);
	printf("\nAddress of arr[1]: %u", &arr[1]);
	printf("\nAddress of arr[2]: %u", &arr[2]);
	cout << endl;
	return 0;
}