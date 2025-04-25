#include<iostream>
using namespace std;

int factorial(int);

int main()
{
	int n;
	cout << "Enter the value of N: ";
	cin >> n;
	cout << endl;
	cout << "Factorial is: " << factorial(n) << endl;;
}

int factorial(int n)
{
	if (n == 1)
		return 1;
	else
		return n * factorial(n-1);

}