/*
Implement a custom strlen function
*/

#include<iostream>

using namespace std;

int stringLength(char[]);

int main()
{
	char str[20] = { '\0', };
	cout << "Enter a string: ";
	gets_s(str);
	cout << endl << "String Length: " << stringLength(str) << endl;
	return 0;
}

int stringLength(char s[])
{
	int size = 0;
	for (int i = 0; s[i] != '\0'; ++i)
		size++;
	return size;

}