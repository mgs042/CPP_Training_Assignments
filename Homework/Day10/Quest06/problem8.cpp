/*
8. Swap Two Numbers Without Using a Third Variable
Problem:
Swap two integers without using a temporary variable, using pass-by-reference.

Hint:
Use simple math:

a = a + b;
b = a - b;
a = a - b;
And pass variables by reference (&) to modify them.
*/

#include<iostream>
using namespace std;

void swap(int &, int &);

int main()
{
	int a, b;
	cout << "Enter the value of a: ";
	cin >> a;
	cout << "Enter the value of b: ";
	cin >> b;
	cout << endl;
	cout << "Before swap: a = " << a << " b = " << b<<endl;
	swap(a, b);
	cout << "After swap: a = " << a << " b = " << b << endl;
	return 0;
}

void swap(int& x, int& y)
{
	x = x + y;
	y = x - y;
	x = x - y;
}