/*
2) Write a Program to Find the Greatest of the Three Numbers
*/

#include<iostream>
using namespace std;

int greatestNumber(int, int, int);

int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	cout << greatestNumber(x, y, z);
	return 0;
}

int greatestNumber(int a, int b, int c)
{
	return ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));
}