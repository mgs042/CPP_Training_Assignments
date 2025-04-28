#include<iostream>
using namespace std;

int getNumberOfDigits(int);
int powerOfDigits(int, int);

int main()
{
	int num;
	cout << "Enter the input: ";
	cin >> num;
	cout << endl;
	if (num == powerOfDigits(num, getNumberOfDigits(num)))
		cout << "Armstrong Number";
	else
		cout << "Not an Armstrong Number";
	cout << endl;
	return 0;
}


int getNumberOfDigits(int num)
{
	int count = 0;
	for (;num > 0;num /= 10)
		count++;
	return count;
}

int powerOfDigits(int num, int pow)
{
	int sum = 0, rem, product;
	for (;num > 0;num /= 10)
	{
		product = 1;
		rem = num % 10;
		for (int itr = 1; itr <= pow; ++itr)
			product *= rem;
		sum += product;
	}
	return sum;
}