/*
70) LTrim, RTrim, & Trim
*/

#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;

#define MAX 100

char* ltrim(char[]);
char* rtrim(char[]);
char* trim(char[]);

int main()
{
	char str[MAX], str1[MAX], str2[MAX];
	cin.getline(str, MAX - 1);
	strcpy_s(str1, str);
	strcpy_s(str2, str);
	cout << "Left Trim: '" << ltrim(str) << "'" << endl;
	cout << "Right Trim: '" << rtrim(str1) << "'" << endl;
	cout << "Full Trim: '" << trim(str2) << "'" << endl;
}

char* ltrim(char str[])
{
	int j;
	for (int i = 0; str[i] == ' '; )
	{
		for (j = i + 1; str[j] != '\0';++j)
		{
			str[j-1] = str[j];
		}
		str[j - 1] = '\0';
	}
	return str;
}

char* rtrim(char str[])
{
	int i;
	for (i = strlen(str) - 1; str[i] == ' '; --i);
	str[i + 1] = '\0';
	return str;
}

char* trim(char str[])
{
	return rtrim(ltrim(str));

}