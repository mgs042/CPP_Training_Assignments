#include<iostream>
#include<string>
using namespace std;

#define MAX 100

void frequencyCounter(char[], int[]);
bool checkAnagram(char[], int[]);

int main()
{
	char str1[MAX], str2[MAX];
	int arr[26] = { 0, };
	cout << "Enter the word 1: ";
	cin.getline(str1, MAX - 1);
	cout << "Enter the word 2: ";
	cin.getline(str2, MAX - 1);
	cout << endl;
	if (strlen(str1) != strlen(str2))
		cout << "It is not an Anagram" << endl;
	else
	{
		frequencyCounter(str1, arr);
		if (checkAnagram(str2, arr))
			cout << "It is an Anagram" << endl;
		else
			cout << "It is not an Anagram" << endl;
	}
	return 0;

}

void frequencyCounter(char str[], int arr[])
{
	for (int i = 0; str[i] != '\0'; ++i)
		arr[str[i] - 'a']++;
	return;
}

bool checkAnagram(char str[], int arr[])
{
	for (int i = 0; str[i] != '\0'; ++i)
	{
		arr[str[i] - 'a']--;
	}
	for (int i = 0; i < 26; ++i)
	{
		if (arr[i] != 0)
			return false;
	}
	return true;
}