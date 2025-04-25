/*
4) Write a program to swap two numbers without using third variable and without using functions or pointers.
*/

#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter the value of a : ";
	cin >> a;
	cout << "Enter the value of b: ";
	cin >> b;
	cout << endl << "Swapping..." << endl;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "Swapped value of a: " << a << endl;
	cout << "Swapped value of b: " << b << endl;
	return 0;
}