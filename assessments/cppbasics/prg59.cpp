/*
59) Count the Number of 1s in Binary Representation of a Number
*/
#include<iostream>
using namespace std;

int countBinDigits(int);

int main()
{
	int n;
	cin >> n;
	cout << countBinDigits(n);
	return 0;
}

int countBinDigits(int num)
{
	int count = 0;
	while (num > 0)
	{
		if (num % 2 == 1)
			count++;
		num /= 2;
	}
	return count;
}