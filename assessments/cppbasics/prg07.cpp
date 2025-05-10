/*
7) Write a Program to Find the Length of the String Without using strlen() Function
*/

#include<iostream>
using namespace std;

#define MAX 100

int stringLength(char str[]);

int main()
{
	char str[MAX];
	cin.getline(str, MAX-1);
	cout << stringLength(str);
	return 0;
}


int stringLength(char str[])
{
	int i;
	for (i = 0; str[i] != '\0'; i++);
	return i;
}