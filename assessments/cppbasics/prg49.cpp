/*
49) Write a Program for Decimal Octal Conversion
*/
#include<iostream>
using namespace std;

int decimalToOctal(int num);

int main()
{
	int num;
	cin >> num;
	cout << decimalToOctal(num);
	return 0;
}

int decimalToOctal(int num)
{
	int sum = 0, place = 0;
	while (num > 0)
	{
		sum += (num % 8) * pow(10, place++);
		num /= 8;
	}
	return sum;
}