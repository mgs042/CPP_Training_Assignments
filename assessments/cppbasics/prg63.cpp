/*
63) Find the Highest Power of 2 Less Than or Equal to N
*/

#include<iostream>
#include<math.h>
using namespace std;

int highestPowerOf2(int);

int main()
{
	int n;
	cin >> n;
	cout << highestPowerOf2(n);
	return 0;
}

int highestPowerOf2(int num)
{
	int i = 0;
	for (i = 0;pow(2, i) <= num;++i);
	return i - 1;
}