/*
8) Write a Program to Toggle Each Character in a String
*/

#include<iostream>
#include<cctype>
using namespace std;

#define MAX 100

char* toggleString(char[]);

int main()
{
	char str[MAX];
	cin.getline(str, MAX - 1);
	cout << toggleString(str);
	return 0;
}

char* toggleString(char str[])
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (islower(str[i]))
			str[i] = toupper(str[i]);
		else
			str[i] = tolower(str[i]);

	}
	return str;
}