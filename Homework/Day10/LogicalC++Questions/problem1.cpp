/*
1. Lost Treasure Map
A pirate found a number carved on a rock. He believes the smallest digit in that number points to the next island he should sail to.
Write a program to find the smallest digit in the given number.
*/

#include<iostream>
#include<limits>
using namespace std;

int smallestDigit(int);

int main()
{
	int num;
	cout << "Enter the num: ";
	cin >> num;
	cout << endl << "The smallest digit is: " << smallestDigit(num) << endl;
	return 0;
}

int smallestDigit(int n)
{
	int min = numeric_limits<int>::max();
	while (n > 0)
	{
		if (n % 10 < min)
			min = n % 10;
		n /= 10;
	}
	return min;

}

