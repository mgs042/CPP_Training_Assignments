#include<iostream>
using namespace std;

void trianglePattern(int);

int main()
{
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	cout << endl;
	trianglePattern(n);
	return 0;
}





void trianglePattern(int num)
{
	if (num % 2 == 0)
	{
		cout << "Triangle cannot be printed" << endl;
		return;
	}
	for (int i = 1; i <= (num+1)/2; ++i)
	{
		for (int j = 1; j <= (((num+1)/2) - i); ++j)
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