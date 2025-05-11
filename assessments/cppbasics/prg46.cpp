/*
46) Write a Program for Octal to Decimal Conversion
*/
#include<iostream>
using namespace std;

int octalToDecimal(int num);

int main()
{
	int num;
	cin >> num;
	cout << octalToDecimal(num);
	return 0;
}

int octalToDecimal(int num)
{
	int sum = 0, place = 0;
	while (num > 0)
	{
		sum += (num % 10) * pow(8, place++);
		num /= 10;
	}
	return sum;
}