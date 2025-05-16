#include<iostream>
using namespace std;

int maxOfTwoNumbers(int* ptr1, int* ptr2);

int main()
{
	int a, b;
	cout << "Enter the two numbers: ";
	cin >> a >> b;
	cout << "Max: " << maxOfTwoNumbers(&a, &b);
	return 0;
}


int maxOfTwoNumbers(int* ptr1, int* ptr2)
{
	return *ptr1>*ptr2?*ptr1:*ptr2;
}