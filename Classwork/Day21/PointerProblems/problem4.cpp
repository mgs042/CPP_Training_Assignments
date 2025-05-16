#include<iostream>
using namespace std;

#define MAX 100

int countVowels(char* str);


int main()
{
	char str[MAX];
	cout << "Enter a string: ";
	cin.getline(str, MAX - 1);
	cout << endl << "Count of vowels: " << countVowels(str);
	return 0;
}

int countVowels(char* str)
{
	char ch;
	int count = 0;
	while (*str != '\0')
	{
		ch = tolower(*(str++));
		if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u')
			count++;
	}
	return count;
}
