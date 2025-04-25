/*
6) If a Five digit number is input through the keyboard, write a program to calculate the sum of
its digits.

ex: i/p : 12345

	o/p : sum = 15
	
	explaination: 1+2+3+4+5 = 15
*/
#include<iostream>
using namespace std;

int main()
{
	int n, sum=0;
	cout << "Enter a number: ";
	cin >> n;
	for(;n>0;n /= 10)
	{
		sum = sum + (n % 10);
		
	}
	cout << endl;
	cout << "Sum of Digits is: " << sum << endl;
	return 0;
}