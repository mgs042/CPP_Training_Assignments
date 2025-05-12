/*
47) Write a Program for Hexadecimal to Decimal Conversion
*/
#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;

#define MAX 100

int hexadecimalToDecimal(char []);

int main()
{
	char num[MAX];
	cin >> num;
	cout << hexadecimalToDecimal(num);
	return 0;
}

int hexadecimalToDecimal(char num[])
{
	int sum = 0, place = 0, i = strlen(num) - 1, digit;
	while (i>=0)
	{
		if (num[i] >= 48 && num[i] <= 57)
			digit = (num[i] - '0');
		else
			digit = tolower(num[i]) - 'a' + 10;
		sum += digit * pow(16, place++);
		i--;
	}
	return sum;
}