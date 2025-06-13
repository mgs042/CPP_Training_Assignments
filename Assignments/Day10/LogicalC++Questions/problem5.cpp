/*
5. King's Perfect Army
A king decided only perfect armies can enter the final battle.
An army's number is perfect if the sum of its divisors equals the number itself.
Check whether a given army number is perfect.
*/

#include<iostream>
using namespace std;
int sumOfDivisors(int);

int main()
{
	int n;
	cout << "Enter the input: ";
	cin >> n;
	cout << endl;
	if (n == sumOfDivisors(n))
	{
		cout << "The Army is Perfect" << endl;
	}
	else
	{
		cout << "The Army is not Perfect" << endl;
	}
}

int sumOfDivisors(int n)
{
	int sum = 0;
	for (int i = 1; i <= (n / 2); ++i)
	{
		if (n % i == 0)
			sum += i;
	}
	return sum;
}