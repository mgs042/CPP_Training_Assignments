/*
10) Write a Program to Remove the Vowels from a String
*/

#include<iostream>
using namespace std;

#define MAX 100

char* removeVowels(char[]);

int main()
{
	char str[MAX];
	cin.getline(str, MAX - 1);
	cout << removeVowels(str);
	return 0;
}

char* removeVowels(char str[])
{
	int i = 0, j = 0;
	char ch;
	for (i = 0; str[i] != '\0';)
	{
		ch = tolower(str[i]);
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		{
			
			for (j = i+1; str[j] != '\0'; ++j)
			{
				str[j - 1] = str[j];
			}
			str[j-1] = '\0';
		}
		else
		{
			i++;
		}
	}
	return str;
}