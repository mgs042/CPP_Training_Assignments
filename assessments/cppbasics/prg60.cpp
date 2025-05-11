/*
60) Check if a Number is a Perfect Number
*/
#include<iostream>
using namespace std;

bool checkPerfectNumber(int);

int main()
{
	int n;
	cin >> n;
	if (checkPerfectNumber(n))
		cout << "Perfect Number";
	else
		cout << "Not a Perfect Number";
	return 0;
}

bool checkPerfectNumber(int num)
{
	int sum = 0;
	for (int i = 1; i <= (num / 2); ++i)
	{
		if (num % i == 0)
			sum += i;
	}
	return num == sum;
}