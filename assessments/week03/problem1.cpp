/*
Problem Statement 1
Write a program that performs the following tasks:

Finds the starting positions (0-based index) of the substrings "are" and "i" in a given input string.
Calculates and prints the sum of these two positions.
If either of the substrings is not found in the input, treat its position as -1.
*/
#include<iostream>
#include<cstring>
using namespace std;

#define MAX 100

int positionOfAre(char *); // to find the position of 'are'
int positionOfI(char *); // to find the position of 'i'
 

int main()
{
	char str[MAX];
	cout << "Enter the string: ";
	gets_s(str);
	cout << endl;
	cout << "Sum = " << positionOfAre(str) + positionOfI(str) << endl; //add the positions of 'are' and 'i'
	return 0;
}

int positionOfAre(char* ptr)
{
	int pos = -1;
	for (int i = 0; ptr[i] != '\0'; ++i)
	{
		if (ptr[i] == 'a' && ptr[i + 1] == 'r' && ptr[i+2] == 'e') //'are' is found
		{
			pos = i;
			break;
		}
	}
	return pos;
}

int positionOfI(char* ptr)
{
	int pos = -1;
	for (int i = 0; ptr[i] != '\0'; ++i)
	{
		if (ptr[i] == 'i') //'i' is found
		{
			pos = i;
			break;
		}
	}
	return pos;
}