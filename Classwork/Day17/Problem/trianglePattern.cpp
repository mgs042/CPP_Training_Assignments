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
	int k = (2 * n) - 2;
	for (int i = 0; i < n; ++i, k--)
	{
		for (int j = 0; j < k; ++j)
			cout << " ";
		for (int l = 0; l <= i; ++l)
			cout << "* ";
		cout << endl;
	}
}