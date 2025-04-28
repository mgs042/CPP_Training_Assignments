#include<iostream>
using namespace std;

void callByValue(int, int);
void callByAddress(int*, int*);
void callByReference(int &, int &);

int main()
{
	int a=5, b=15;
	cout << "Initial Value of a = " << a << ", b = " << b << endl<<endl;
	cout << "-----------------------------------------------------------------" << endl;
	callByValue(a, b);
	cout << "Value of a = " << a << ", b = " << b << endl<<endl;
	cout << "-----------------------------------------------------------------" << endl;
	a = 5;
	b = 15;
	callByAddress(&a, &b);
	cout << "Value of a = " << a << ", b = " << b << endl<<endl;
	cout << "-----------------------------------------------------------------" << endl;
	a = 5;
	b = 15;
	callByReference(a, b);
	cout << "Value of a = " << a << ", b = " << b << endl << endl;
	cout << "-----------------------------------------------------------------" << endl;

	return 0;
}

void callByValue(int x, int y)
{
	cout << "Call By Value"<<endl<<endl;
	cout << "Initial Arguments Passed x = " << x << ", y = " << y<<endl;
	x = x + 15;
	y = y + 25;
	cout << "Changed Arguments x = " << x << ", y = " << y << endl;
	cout << endl;
	return;
}

void callByAddress(int *x, int *y)
{
	cout << "Call By Address" << endl << endl;
	cout << "Arguments Passed x = " << x << ", y = " << y << endl;
	cout << "Initial Argument Values x = " << *x << ", y = " << *y << endl;
	*x = *x + 15;
	*y = *y + 25;
	cout << "Changed Argument Values x = " << *x << ", y = " << *y << endl;
	cout << endl;
	return;
}

void callByReference(int &x, int &y)
{
	cout << "Call By Reference" << endl << endl;
	cout << "Arguments Passed x = " << x << ", y = " << y << endl;
	cout << "Initial Argument Values x = " << x << ", y = " << y << endl;
	x = x + 15;
	y = y + 25;
	cout << "Changed Argument Values x = " << x << ", y = " << y << endl;
	cout << endl;
	return;
}