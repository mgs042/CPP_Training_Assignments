/*
2. Sum of Digits Until a Single Digit
Problem:
Take an integer and keep adding its digits recursively until only one digit remains.

Hint:

Use a function that calculates sum of digits.
If result >= 10, call the same function again.
*/
#include<iostream>
using namespace std;

void addDigits(int);

int main()
{
	int n;
	cout << "Enter the input: ";
	cin >> n;
	cout << endl;
	addDigits(n);
	return 0;
}

void addDigits(int num)
{
	if (num >= 10)
	{
		int temp = num, sum = 0;
		while (temp > 0)
		{
			sum += (temp % 10);
			temp /= 10;
		}
		cout << sum << endl;
		addDigits(sum);
	}
	else
		return;

}