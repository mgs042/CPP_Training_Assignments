#include<iostream>
using namespace std;

void printPattern(int);

int main()
{
	int num;
	cout << "Enter the value of n: ";
	cin >> num;
	printPattern(num);
	return 0;
}

void printPattern(int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << "  ";
		for (int j = 0; j <= i; ++j)
			cout << "* ";
		for (int k = 0; k < 2 * (n - i)-2; ++k)
			cout << "  ";
		for (int l = 0; l <= i; ++l)
			cout << "* ";
		cout << endl;
	}
	for (int i = n-2; i >= 0; --i)
	{
		cout << "  ";
		for (int j = 0; j <= i; ++j)
			cout << "* ";
		for (int k = 0; k < 2 * (n - i) - 2; ++k)
			cout << "  ";
		for (int l = 0; l <= i; ++l)
			cout << "* ";
		cout << endl;
	}
}