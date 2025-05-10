/*
16) Write a Program to Check the Prime Number
*/
#include<iostream>
using namespace std;

bool isPrime(int);

int main()
{
	int n;
	cin >> n;
	if (isPrime(n))
		cout << "Prime";
	else
		cout << "Not Prime";
	return 0;
}

bool isPrime(int num)
{
	if (num == 0 || num == 1)
		return false;
	for (int i = 2; i <= (num / 2); ++i)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}