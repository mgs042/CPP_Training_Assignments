#include<iostream>
using namespace std;

int main()
{
	int N, sum = 0, product = 1, d;
	cout << "Enter the value of N: ";
	cin >> N;
	cout << endl;
	if (N > -10 && N < 10)
	{
		cout << "Sum of digits is: " << N << endl;
		cout << "Product of digits is: " << N <<endl;
		exit(0);
	}
	do
	{
		d = N % 10;
		if (d != 0) 
		{
			sum = sum + d;
			product = product * d;
		}
		N = N / 10;
	} while (N > 0);
	cout << "Sum of digits is: " << sum << endl;
	cout << "Product of digits is: " << product << endl;
}