#include<iostream>
#include<cctype>
using namespace std;

#define MAX 100

int sumOfDigits(char str[]);

int main()
{
	char str[MAX];
	cout << "Enter the number: ";
	cin >> str;
	cout << endl << "Sum of Digits: " << sumOfDigits(str) << endl;
	return 0;
}

int sumOfDigits(char str[])
{
	int sum = 0;
	for (int i = 0; str[i] != '\0'; ++i)
	{
		if (isdigit(str[i]))
		{
			sum += (str[i] - 48);
		}
	}
	return sum;
}