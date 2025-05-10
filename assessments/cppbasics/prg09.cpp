/*
9) Write a Program to Count the Number of Vowels
*/

#include<iostream>
#include<cctype>
using namespace std;

#define MAX 100

int countVowels(char str[]);

int main()
{
	char str[MAX];
	cin.getline(str, MAX - 1);
	cout << countVowels(str);
	return 0;
}

int countVowels(char str[])
{
	int count = 0;
	char ch;
	for (int i = 0; str[i] != '\0'; ++i)
	{
		ch = tolower(str[i]);
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			count++;
	}
	return count;
}