#include<iostream>
using namespace std;

int main()
{
	int N, count = 0;;
	cout << "Enter the value of N: ";
	cin >> N;
	if (N < 4)
	{
		cout << endl << "Invalid Input" << endl;
	}
	for (int i = 1; i < N; ++i)
	{
		for (int j = i; j < N; ++j)
		{
			for (int k = j; k < N; ++k)
			{
				for (int l = k;l < N;++l)
				{
					if ((i + j + k + l) == N)
					{
						cout << i << " + " << j << " + " << k << " + " << l << endl;
						count++;
					}
				}
			}
		}
	}
	cout << endl;
	cout << "Total Count: " << count << endl;
}