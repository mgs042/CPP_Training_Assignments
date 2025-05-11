/*
42) Write a Program to Swap the Values of Two Variables Without Using any Extra Variable
*/
#include<iostream>
using namespace std;

void swap(int&, int&);

int main()
{
	int a, b;
	cin >> a >> b;
	swap(a, b);
	cout << a << " " << b;
	return 0;
}

void swap(int& a, int& b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}