/*
45) Write a Program to Find the Maximum and Minimum of the Two Numbers Without Using the Comparison Operator
*/
#include<iostream>
#include<math.h>
using namespace std;

int maxOfTwoNos(int, int);
int minOfTwoNos(int, int);

int main()
{
	int x, y;
	cin >> x >> y;
	cout << "Max: " << maxOfTwoNos(x, y) << endl;
	cout << "Min: " << minOfTwoNos(x, y) << endl;
	return 0;
}

int maxOfTwoNos(int a, int b)
{
	return ((a + b) + abs(a - b)) / 2;
}

int minOfTwoNos(int a, int b)
{
	return ((a + b) - abs(a - b)) / 2;
}

