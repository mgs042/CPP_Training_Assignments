#include<iostream>
#include<cstring>
using namespace std;

#define MAX 100

char* lineReverse(char str[]);

int main()
{
	char str[MAX];
	cout << "Enter a string: ";
	cin.getline(str, MAX - 1);
	cout << endl << "Reverse line: " << lineReverse(str) << endl;
	return 0;
}

char* lineReverse(char str[])
{
	int l = 0, i;
	char t;
	for (i = 0; str[i] != '\0'; ++i)
	{

		if (str[i] == ' ')
		{
			for (int j = i - 1; j > l; j--)
			{
				t = str[j];
				str[j] = str[l];
				str[l] = t;
				l++;
			}
			l = i + 1;
		}
	}
	for (int j = i - 1; j > l; j--)
	{
		t = str[j];
		str[j] = str[l];
		str[l] = t;
		l++;
	}
	return str;
}