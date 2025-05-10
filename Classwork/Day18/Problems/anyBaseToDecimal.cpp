#include<iostream>
#include<math.h>
using namespace std;

int convertBaseToDecimal(int, int);

int main()
{
	int num, base;
	cout << "Enter the base: ";
	cin >> base;
	cout << "Enter the number to be converted: ";
	cin >> num;
	cout << "Decimal: " << convertBaseToDecimal(num, base) << endl;
	return 0;
}

int convertBaseToDecimal(int num, int base)
{
	int sum = 0, place = 0;
	while (num > 0)
	{
		sum = sum + (num%10) * pow(base, place);
		num /= 10;
		place++;
	}
	return sum;
}
