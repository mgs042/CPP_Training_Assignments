#include<iostream>
using namespace std;

int main()
{
	int N;
	cout << "Enter the value of N: ";
	cin >> N;
	for (int i = 1; i <= (N * N); ++i)
	{
		if (i % N == 0)
			cout << i << endl;
		else
			cout << i << '*';
	}
}