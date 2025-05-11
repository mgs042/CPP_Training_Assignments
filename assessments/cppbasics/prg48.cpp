/*
48) Write a Program for Decimal to Binary Conversion
*/
#include<iostream>
using namespace std;

int decimalToBinary(int num);

int main()
{
	int num;
	cin >> num;
	cout << decimalToBinary(num);
	return 0;
}

int decimalToBinary(int num)
{
	int sum = 0, place = 0;
	while (num > 0)
	{
		sum += (num % 2) * pow(10, place++);
		num /= 2;
	}
	return sum;
}