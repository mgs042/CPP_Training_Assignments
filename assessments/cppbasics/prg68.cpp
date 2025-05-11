/*
68) Find Remainder Without Using % Operator
*/
#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	cout << a - ((a / b) * b);
	return 0;
}