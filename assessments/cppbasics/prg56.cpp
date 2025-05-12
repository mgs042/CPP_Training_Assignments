/*
56) Find the Smallest Digit in a Number
*/

#include<iostream>
#include<climits>
using namespace std;

int smallestDigit(int);

int main()
{
	int n;
	cin >> n;
	cout << smallestDigit(n);
	return 0;
}

int smallestDigit(int num)
{
	int small = INT_MAX;
	while (num > 0)
	{
		if ((num % 10) < small)
			small = num % 10;
		num /= 10;
	}
	return small;
}