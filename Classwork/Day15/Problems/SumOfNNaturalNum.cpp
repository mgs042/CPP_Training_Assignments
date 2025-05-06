#include<iostream>
using namespace std;

int sumOfNaturalNum(int);

int main(int argc, char *argv[])
{
	if (argc == 2)
		cout << sumOfNaturalNum(atoi(argv[1])) << endl;
	else
	{
		int num;
		cout << "Enter the value of N: ";
		cin >> num;
		cout << sumOfNaturalNum(num) << endl;
	}
}

int sumOfNaturalNum(int n)
{
	if (n == 1)
		return 1;
	else
		return n+sumOfNaturalNum(n - 1);
}