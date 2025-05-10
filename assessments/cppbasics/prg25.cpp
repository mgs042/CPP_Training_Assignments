/*
25) Write a Program to Check if the Given String is Palindrome or Not
*/
#include<iostream>
#include<string.h>
using namespace std;

#define MAX 100

bool isPalindrome(char[]);

int main()
{
	char str[MAX];
	cin.getline(str, MAX - 1);
	if (isPalindrome(str))
		cout << "Palindrome";
	else
		cout << "Not Palindrome";
	return 0;
}

bool isPalindrome(char str[])
{
	int l = 0, r = strlen(str) - 1;
	while (l < r)
	{
		if (str[l] != str[r])
			return false;
		l++;
		r--;
	}
	return true;
}