#include<iostream>
using namespace std;

bool palindromeCheck(int);

int main()
{
	int num;
	cout << "Enter the number: ";
	cin >> num;
	cout << endl;
	if (palindromeCheck(num))
	{
		cout << "It is a Palindrome Number" << endl;
	}
	else
	{
		cout << "It is not a Palindrome Number" << endl;
	}
	return 0;
}

bool palindromeCheck(int num)
{
	int rev = 0, temp=num;
	while (temp > 0)
	{
		rev = rev * 10 + temp % 10;
		temp /= 10;
	}
	return rev == num;
}