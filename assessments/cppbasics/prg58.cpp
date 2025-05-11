/*
58) Print All Divisors of a Number
*/

#include<iostream>
using namespace std;

void printDivisors(int num);

int main()
{
	int n;
	cin >> n;
	printDivisors(n);
	return 0;
}

void printDivisors(int num)
{
	for (int i = 1; i <= num; ++i)
	{
		if (num % i == 0)
			cout << i << " ";
	}
	return;
}