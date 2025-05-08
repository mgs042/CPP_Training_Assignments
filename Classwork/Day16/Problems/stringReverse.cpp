#include<iostream>
using namespace std;

#define MAX 100

char* stringReverse(char[], int);
int stringLength(char[]);

int main()
{
	char str[MAX];
	cout << "Enter a string: ";
	cin.getline(str, MAX - 1);
	cout << endl << "Reverse string: " << stringReverse(str, stringLength(str)) << endl;
	return 0;
}

int stringLength(char str[])
{
	int i;
	for (i = 0; str[i] != '\0'; i++);
	return i;
}

char* stringReverse(char str[], int size)
{
	char temp;
	for (int i = 0, j = size - 1; i < j; ++i, --j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	return str;
}
