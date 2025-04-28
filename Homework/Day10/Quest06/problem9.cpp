/*
9. Find Power Using Only Multiplication
Problem:
Write a function to compute a^b using only multiplication, no pow() or loops.

Hint:
Use recursion:

a^b = a * a^(b-1)
Base case: b == 0 ? return 1.
*/

#include<iostream>
using namespace std;

int findPower(int, int);

int main()
{
	int n, p;
	cout << "Enter the number: ";
	cin >> n;
	cout << "Enter the power: ";
	cin >> p;
	cout << endl;
	cout << "Answer is: " << findPower(n, p) << endl;
	return 0;
}


int findPower(int a, int pow)
{
	if (pow == 1)
		return a;
	else
		return a * findPower(a, pow - 1);
}
