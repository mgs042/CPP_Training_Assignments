#include<iostream>
#include<cctype>
using namespace std;

int main()
{
	char ch;
	cout << "Enter a character: ";
	cin >> ch;
	ch = tolower(ch);
	if (ch >= 97 && ch <= 122)
		cout << "It is an Alphabet" << endl;
	else
		cout << "It is not an Alphabet" << endl;
	return 0;
}