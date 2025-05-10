/*
26) Write a Program to Check if Two Strings are Anagram or Not
*/
#include<iostream>
using namespace std;

#define MAX 100

bool isAnagram(char[], char[]);

int main()
{
	char str1[MAX], str2[MAX];
	cin.getline(str1, MAX - 1);
	cin.getline(str2, MAX - 2);
	if (isAnagram(str1, str2))
		cout << "Anagram";
	else
		cout << "Not Anagram";
	return 0;
}

bool isAnagram(char ch1[], char ch2[])
{
	int alphabets[26] = { 0, };
	for (int i = 0; ch1[i] != '\0'; i++)
		alphabets[tolower(ch1[i]) - 'a']++;
	for (int i = 0; ch2[i] != '\0'; i++)
		alphabets[tolower(ch2[i]) - 'a']--;
	for (int i = 0; i < 26; ++i)
	{
		if (alphabets[i] != 0)
			return false;
	}
	return true;
}