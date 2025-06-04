/*
2. Odd Coin Counting
In a village fair, you earn odd-numbered coins (1, 3, 5...) from games.
Given your total coin-collection number, find the sum of only the odd digits of your coin number to determine your prize.

*/

#include<iostream>
using namespace std;

int sumOddDigits(int);

int main()
{
	int n;
	cout << "Enter the input: ";
	cin >> n;
	cout << endl;
	cout << "Sum of Digits is: " << sumOddDigits(n);
	return 0;
}

int sumOddDigits(int n)
{
	int sum = 0, t;
	for (;n > 0; n /= 10)
	{
		t = n % 10;
		if (t % 2 != 0)
			sum += t;
	}
	return sum;
}