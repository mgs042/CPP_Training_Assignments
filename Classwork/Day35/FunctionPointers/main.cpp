#include<iostream>
using namespace std;

void greet();
void add(int, int);
void sub(int, int);

int main()
{
	void (*fptr)() = greet;
	fptr();
	void (*fptr1)(int, int) = add;
	fptr1(10,5);
	fptr1 = sub;
	fptr1(10, 7);
	return 0;
}

void greet()
{
	cout << "Hello World" << endl;
}

void add(int a, int b)
{
	cout << "Sum: " << a + b << endl;
}

void sub(int a, int b)
{
	cout << "Difference: " << a - b << endl;
}