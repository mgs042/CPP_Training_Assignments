/*
57) Sum Only Odd Digits of a Number
*/

#include<iostream>
using namespace std;

int sumOfOddDigits(int);

int main()
{
	int n;
	cin >> n;
	cout << sumOfOddDigits(n);
	return 0;
}

int sumOfOddDigits(int num)
{
	int sum = 0, r;
	while (num > 0)
	{
		r = num % 10;
		if (r % 2 != 0)
			sum += r;
		num /= 10;
	}
	return sum;
}