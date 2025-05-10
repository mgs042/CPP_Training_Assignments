/*
11) Write a Program to Remove All Characters From a String Except Alphabets
*/

#include<iostream>
using namespace std;

#define MAX 100

char* removeNonAlpha(char[]);

int main()
{
	char str[MAX];
	cin.getline(str, MAX - 1);
	cout << removeNonAlpha(str);
	return 0;
}

char* removeNonAlpha(char str[])
{
	int i = 0, j = 0;
	char ch;
	for (i = 0; str[i] != '\0';)
	{
		ch = tolower(str[i]);
		if ((ch<97 || ch>122))
		{
			for (j = i + 1; str[j] != '\0'; ++j)
			{
				str[j - 1] = str[j];
			}
			str[j - 1] = '\0';
		}
		else
		{
			i++;
		}
	}
	return str;
}