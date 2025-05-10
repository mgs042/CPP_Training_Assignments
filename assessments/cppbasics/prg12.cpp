/*
12) Write a Program to Remove Spaces From a String
*/

#include<iostream>
using namespace std;

#define MAX 100

char* removeSpace(char[]);

int main()
{
	char str[MAX];
	cin.getline(str, MAX - 1);
	cout << removeSpace(str);
	return 0;
}

char* removeSpace(char str[])
{
	int i = 0, j = 0;
	for (i = 0; str[i] != '\0';)
	{
		if (str[i]==' ')
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