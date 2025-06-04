/*
Find the Middle Value Among Three Numbers
Problem:
Write a function that takes three integers and returns the middle one (not maximum, not minimum).

Hint:
Use basic comparisons (>, <) between the three numbers.
Check conditions like:

If a > b and a < c or a < b and a > c, then a is the middle.

*/
#include<iostream>
using namespace std;

int findMiddleNumber(int, int, int);

int main()
{
	int x, y, z;
	cout << "Enter input 1: ";
	cin >> x;
	cout << "Enter input 2: ";
	cin >> y;
	cout << "Enter input 3: ";
	cin >> z;
	cout << endl;
	cout << "The middle number is: " << findMiddleNumber(x, y, z) << endl;
	return 0;

}


int findMiddleNumber(int a, int b, int c)
{
	return a > b ? (b > c ? b : (a > c ? c : a)) : (a > c ? a : (b > c ? c : b));
}