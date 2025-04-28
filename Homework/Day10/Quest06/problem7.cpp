/*
7. Form a New Number from Two Numbers
Problem:
Form a new number using last digit of first number and first digit of second number.

Hint:

Last digit ? (firstNumber % 10).
First digit ? keep dividing secondNumber by 10 until it's < 10.
Then combine them (e.g., lastDigit * 10 + firstDigit).
*/

#include<iostream>
using namespace std;

int firstDigit(int);
int lastDigit(int);

int main()
{
	int a, b;
	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;
	cout << endl;
	cout << "Number formed is: " << (lastDigit(a) * 10) + firstDigit(b) << endl;
	return 0;
}

int firstDigit(int num)
{
	int temp = 0;
	while (num > 0)
	{
		temp = num % 10;
		num /= 10;
	}
	return temp;
}

int lastDigit(int num)
{
	return num % 10;
}