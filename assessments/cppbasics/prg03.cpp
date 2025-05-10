/*
3) C++ Program To Check Whether Number is Even Or Odd
*/

#include<iostream>
using namespace std;

bool isEvenOrOdd(int);

int main()
{
	int num;
	cin >> num;
	if (isEvenOrOdd(num))
	{
		cout<<"Even";
	}
	else
	{
		cout << "Odd";
	}
	return 0;
}

bool isEvenOrOdd(int a)
{
	return a % 2 == 0;
}