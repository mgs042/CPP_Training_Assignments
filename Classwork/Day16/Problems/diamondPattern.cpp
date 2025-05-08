#include<iostream>
using namespace std;

void diamondPattern(int);

int main()
{
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	cout << endl;
	diamondPattern(n);
	return 0;
}





void diamondPattern(int num)
{
	for (int i = 1; i <= num; ++i)
	{
		for (int j = 1; j <= (num - i); ++j)
		{
			cout << " ";
		}
		for (int k = 1; k < (2 * i); k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = num-1; i > 0; --i)
	{
		for (int j = 1; j <= (num - i); ++j)
		{
			cout << " ";
		}
		for (int k = 1; k < (2 * i); k++)
		{
			cout << "*";
		}
		cout << endl;
	}
}