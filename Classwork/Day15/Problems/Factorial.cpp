#include<iostream>
using namespace std;

int factorial(int);

int main(int argc, char* argv[])
{
	if (argc == 2)
		cout << factorial(atoi(argv[1])) << endl;
	else
	{
		int num;
		cout << "Enter the value of N: ";
		cin >> num;
		cout << "Factorial: " << factorial(num) << endl;
	}
}

int factorial(int n)
{
	int product = 1;
	for (int i = n; i > 0; i--)
		product *= i;
	return product;
}