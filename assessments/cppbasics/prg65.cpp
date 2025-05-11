/*
66) Sum of Series 1 + 2 + 4 + 8 + ... up to N terms
*/
#include<iostream>
using namespace std;

int sumOfSeries(int);

int main()
{
	int n;
	cin >> n;
	cout << sumOfSeries(n);
	return 0;
}

int sumOfSeries(int term)
{
	int k = 1, sum = 0;
	for (int i = 0; i < term;++i)
	{
		sum += k;
		k *= 2;
	}
	return sum;
}