#include<iostream>
using namespace std;

void printPattern(int);

int main()
{
	int num;
	cout << "Enter the value of n: ";
	cin >> num;
	cout << endl;
	printPattern(num);
	return 0;
}

void printPattern(int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <= i; ++j)
			cout << ' ';
		for (int k = 0; k < (2 * (n - i)) - 1; ++k)
			cout << "*";
		cout << endl;
	}
	for (int i = n-2; i >= 0; --i)
	{
		for (int j = 0; j <= i; ++j)
			cout << ' ';
		for (int k = 0; k < (2 * (n - i)) - 1; ++k)
			cout << "*";
		cout << endl;
	}


}