/*
Problem 4: Count Number of Zeros in a Number
Problem Statement:
Write a recursive function to count the number of zeros in an integer.
i/p: 102040
o/p: Number of zeros in 102040 is 3
*/

#include<iostream>
using namespace std;

int countZeroes(int);

int main()
{
	int n;
	cout << "Enter the input: ";
	cin >> n;
	cout << endl;
	if(n==0)
		cout << "No. of Zeroes in this number: " << 1 << endl;
	else
		cout << "No. of Zeroes in this number: " << countZeroes(n) << endl;
}

int countZeroes(int n)
{
	if (n == 0)
		return 0;
	else
	{
		if (n % 10 == 0)
			return 1 + countZeroes(n / 10);
		else
			return countZeroes(n / 10);
	}
}