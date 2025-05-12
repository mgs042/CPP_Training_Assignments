#include<iostream>
using namespace std;

void swap1(int, int);
void swap2(int*, int*);
void swap3(int&, int&);

int main()
{
	int x = 10, y = 20;
	cout << "Call by Val" << endl;
	cout << "Before Swap: ";
	cout << x << " " << y << endl;
	swap1(x, y);
	cout << "After Swap: ";
	cout << x << " " << y << endl;
	cout << endl;
	cout << "Call by Reference" << endl;
	cout << "Before Swap: ";
	cout << x << " " << y << endl;
	swap2(&x, &y);
	cout << "After Swap: ";
	cout << x << " " << y << endl;
	cout << "Call by Address" << endl;
	cout << "Before Swap: ";
	cout << x << " " << y << endl;
	swap3(x, y);
	cout << "After Swap: ";
	cout << x << " " << y << endl;
	cout << endl;


}

void swap1(int a, int b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "In Swap Function: " << a << " " << b << endl;
	return;
}

void swap2(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	cout << "In Swap Function: " << *a << " " << *b << endl;
	return;
}


void swap3(int &a, int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "In Swap Function: " << a << " " << b << endl;
	return;
}

