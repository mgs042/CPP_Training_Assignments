/*
18) Write a Program to Check Whether a Number is an Armstrong Number or Not
*/

#include<iostream>
#include<cmath>
using namespace std;

int countDigits(int);
bool isArmstrong(int, int);

int main()
{
	int num;
	cin >> num;
	if (isArmstrong(num, countDigits(num)))
		cout << "Armstrong";
	else
		cout << "not Armstrong";
	return 0;
}

int countDigits(int num)
{
	int count = 0;
	while (num > 0)
	{
		count++;
		num /= 10;
	}
	return count;
}

bool isArmstrong(int num, int p)
{
	int temp = num, sum = 0;
	while (temp > 0)
	{
		sum += pow(temp % 10, p);
		temp /= 10;
	}
	return sum == num;
}