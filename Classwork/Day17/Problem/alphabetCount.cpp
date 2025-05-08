#include<iostream>
#include<cctype>
using namespace std;

#define MAX 100

void alphabetCount(char[], int[]);

int main()
{
	char str[MAX];
	int arr[26] = { 0, };
	cout << "Enter the string: ";
	cin.getline(str, MAX - 1);
	cout << endl;
	alphabetCount(str, arr);
	for (int i = 0; i < 26; ++i)
		if(arr[i] != 0)
			cout << char(i + 'a') << " -- " << arr[i] << endl;
	cout << endl;
}

void alphabetCount(char str[], int arr[])
{
	for (int i = 0; str[i] != '\0';++i)
	{
		arr[tolower(str[i]) - 'a']++;
	}
}