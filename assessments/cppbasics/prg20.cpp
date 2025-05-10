/*
20) Write a Program to Calculate the Greatest Common Divisor of Two Numbers
*/

#include<iostream>
using namespace std;

int greatestCommonDivisor(int, int);

int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	cout << greatestCommonDivisor(num1, num2);
	return 0;

}

int greatestCommonDivisor(int num1, int num2)
{
	int temp;
	while (num2 > 0)
	{
		temp = num1 % num2;
		num1 = num2;
		num2 = temp;
	}
	return num1;
}