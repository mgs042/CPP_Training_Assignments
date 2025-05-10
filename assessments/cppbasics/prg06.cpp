/*
6) Write a Program to Print Check Whether a Character is an Alphabet or Not
*/

#include<iostream>
using namespace std;

#include<cctype>

int main()
{
	char ch;
	cin >> ch;
	if (isalpha(ch))
		cout << "Alphabet";
	else
		cout << "Not Alphabet";
	return 0;
}