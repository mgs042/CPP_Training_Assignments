/*
38) Write a Program to Calculate the Length of the String Using Recursion
*/
#include<iostream>
using namespace std;

#define MAX 100

int stringLength(char[], int);

int main()
{
	char str[MAX];
	cin.getline(str, MAX - 1);
	cout << stringLength(str, 0);
	return 0;
}

int stringLength(char str[], int count)
{
	if (str[count] == '\0')
		return count;
	else
		return stringLength(str, count + 1);
}