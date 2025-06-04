/*
7. First Non-Zero Digit in Secret Code
A code is considered valid only if its first non-zero digit from the left is even.
Write a program that extracts the first non-zero digit and checks if it's even.
*/

#include<iostream>
using namespace std;

int main()
{
	string code;
	bool flag = false;
	cout << "Enter the code: ";
	cin >> code;
	cout << endl;
	for (int i = 0; i < code.length(); i++)
	{
		if (code[i] != '0')
		{
			if ((int(code[i]) - 48) % 2 == 0)
			{
				flag = true;
			}
			break;
		}
	}
	if (flag)
		cout << "Code is Valid" << endl;
	else
		cout << "Code is Invalid" << endl;
	return 0;
}