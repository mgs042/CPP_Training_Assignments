#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter value of a: ";
	cin >> a;
	cout << "Enter value of b: ";
	cin >> b;
	cout << endl;
	cout << "Before Swap: a = " << a << " b = " << b << endl;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	cout << "After Swap: a = " << a << " b = " << b << endl;
	return 0;
}