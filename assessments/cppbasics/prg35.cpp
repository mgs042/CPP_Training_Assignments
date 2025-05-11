/*
35) Write a Program to Print the Given String in Reverse Order
*/
#include<iostream>
#include<string.h>
using namespace std;

#define MAX 100
void printReverseString(char str[]);

int main()
{
	char str[MAX];
	cin.getline(str, MAX - 1);
	printReverseString(str);
}

void printReverseString(char str[])
{
	for (int i = strlen(str) - 1; i >= 0; --i)
		cout << str[i];
	return;
}
