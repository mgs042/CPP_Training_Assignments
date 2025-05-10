//converting decimal to any base

#include<iostream>
#include<math.h>
using namespace std;

int decimalToBase(int, int);


int main()
{
	int num, base;
	cout << "Enter the decimal number to be converted: ";
	cin >> num;
	cout << "Enter the base to be converted to: ";
	cin >> base;
	cout << endl;
	cout << "Base " << base << ": " << decimalToBase(num, base);
	return 0;
}

int decimalToBase(int num, int base)
{
	int sum = 0, place = 0;
	while (num > 0)
	{
		sum = sum + (num % base) * pow(10, place);
		num /= base;
		place++;
	}
	return sum;
}
