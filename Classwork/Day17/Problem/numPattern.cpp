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
	int k = 1;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout << k << " ";
			k++;
		}
		cout << endl;
	}
}