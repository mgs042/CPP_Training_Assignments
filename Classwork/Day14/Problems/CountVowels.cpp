#include<iostream>
using namespace std;

#define MAX 10

int countVowels(char*);

int main()
{
	char str[MAX];
	cout << "Enter the word: ";
	cin.getline(str, MAX);
	cout << endl << "No. of Vowels: " << countVowels(str) << endl;
	return 0;
}

int countVowels(char* ptr)
{
	int count = 0;
	char ch;
	while (*ptr != '\0')
	{
		ch = tolower(*ptr);
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			count++;
		ptr++;
	}
	return count;
}