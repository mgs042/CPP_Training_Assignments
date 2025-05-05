/*
Problem Statement 7
Write a program that takes two comma-separated lists of integers as input.
For each integer N in the first list, the program needs to find the count of its
occurrences (denoted as C) in the second list. The program should print the
result N-C for each integer N in the first list.
*/

#include<iostream>
#include<string.h>
using namespace std;

#define MAX 100

int countOccurrencesOfElement(int[], int, int); //to count occurrences of a specific element in an array

int main()
{
	char str1[MAX], str2[MAX];
	int size1 = 0, arr1[MAX], size2 = 0, arr2[MAX];
	cout << "Enter the first comma separated list: ";
	cin >> str1;
	cout << "Enter the second comma separated list: ";
	cin >> str2;
	cout << endl;
	char* tokens;
	tokens = strtok(str1, ",");
	while (tokens)
	{
		arr1[size1] = atoi(tokens);
		tokens = strtok(NULL, ",");
		size1++;
	}
	tokens = strtok(str2, ",");
	while (tokens)
	{
		arr2[size2] = atoi(tokens);
		tokens = strtok(NULL, ",");
		size2++;
	}
	cout << endl;
	for (int i = 0; i < size1; ++i)
	{
		cout << arr1[i] << "-" << countOccurrencesOfElement(arr2, size2, arr1[i]) << endl;
	}
	return 0;

}

int countOccurrencesOfElement(int arr[], int size, int k)
{
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] == k)
			count++;
	}
	return count;
}