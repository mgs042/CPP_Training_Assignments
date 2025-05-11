/*
64) Check if the Product of Digits is a Prime Number
*/

#include<iostream>
using namespace std;

bool isPrime(int);
int productOfDigits(int);

int main()
{
	int n;
	cin >> n;
	if (isPrime(productOfDigits(n)))
		cout << "Product of Digits is Prime";
	else
		cout << "Product of Digits is not Prime";
	return 0;
}

bool isPrime(int n)
{
	if (n == 1)
		return false;
	for (int i = 2; i <= (n / 2);++i)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int productOfDigits(int num)
{
	int pro = 1;
	while (num > 0)
	{
		pro *= (num % 10);
		num /= 10;
	}
	return pro;
}