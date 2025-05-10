/*
5) Write a Program to Check Whether a Character is a Vowel or Consonant
*/

#include<iostream>
#include<cctype>
using namespace std;

bool isVowelOrConsonant(char ch);

int main()
{
	char ch;
	cin >> ch;
	if (isVowelOrConsonant(ch))
		cout << "Vowel";
	else
		cout << "Consonant";
	return 0;
}

bool isVowelOrConsonant(char ch)
{
	ch = tolower(ch);
	return (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u');
}