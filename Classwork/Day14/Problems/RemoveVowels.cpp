#include<iostream>
#include<cctype>
using namespace std;

#define MAX 100

char* removeVowels(char*);
bool isVowel(char);

int main()
{
	char str[MAX];
	memset(str, '\0', MAX);
	cout << "Enter a string: ";
	cin.getline(str, MAX-1);
	cout << endl;
	cout << removeVowels(str);
	return 0;
}

bool isVowel(char ch)
{
	ch = tolower(ch);
	return (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u');
}

char* removeVowels(char* ptr)
{
	char* temp = ptr, *t;
	while (*temp != '\0')
	{
		if (isVowel(*temp))
		{
			for (t = temp + 1; *t != '\0'; ++t)
			{
				*(t - 1) = *t;
			}
			t--;
			*t = '\0';

		}
		temp++;
	}
	return ptr;
}