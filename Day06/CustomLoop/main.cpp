#include<iostream>
using namespace std;

int main()
{
	int n, i = 1, k = 0;
	cout << "Enter the value of n: ";
	cin >> n;
	cout << endl << endl;
	while (i < n)
	{
		cout << k << ", ";
		k = k + (2 * i) + 1;
		i++;
	}
	cout << k << endl;
	return 0;
}