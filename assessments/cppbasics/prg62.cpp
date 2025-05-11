/*
62) Find the First Non-Zero Digit of a Number
*/
#include<iostream>
using namespace std;

int firstDigit(int);

int main()
{
	int n;
	cin >> n;
	cout << firstDigit(n);
	return 0;
}

int firstDigit(int n)
{
	while (n > 10)
	{
		n /= 10;
	}
	return n;
}