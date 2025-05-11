/*
40) Write a Program to Count the Sum of Numbers in a String
*/

#include<iostream>
using namespace std;
#define MAX 100

int sumOfDigits(char[]);

int main()
{
	char str[MAX];
	cin >> str;
	cout << sumOfDigits(str);
	return 0;
}

int sumOfDigits(char str[])
{
	int sum = 0;
	for (int i = 0; str[i] != '\0'; ++i)
	{
		sum += str[i] - '0';
	}
	return sum;
}
