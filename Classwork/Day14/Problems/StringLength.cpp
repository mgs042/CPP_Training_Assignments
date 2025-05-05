#include<iostream>
using namespace std;

#define MAX 100

int stringLength(char*);

int main()
{
	char str[MAX];
	cout << "Enter string: ";
	cin.getline(str, 100);
	cout << endl << "String Length: " << stringLength(str) << endl;
	return 0;
}

int stringLength(char* ptr)
{
	int count = 0;
	while (*ptr!='\0')
	{
		count++;
		ptr++;
	}
	return count;
}