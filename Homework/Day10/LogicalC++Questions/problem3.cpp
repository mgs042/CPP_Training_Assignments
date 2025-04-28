/*
3. Broken Clock
A magical clock only rings when the current minute is a divisor of the hour shown.
Given an hour value, print all minutes when the clock will ring.
*/

#include<iostream>
using namespace std;

int main()
{
	int h;
	cout << "Enter the hour value: ";
	cin >> h;
	cout << endl;
	for (int i = 1; i < 61; ++i)
	{
		if (h % i == 0)
			cout << i << endl;
	}
	return 0;
}