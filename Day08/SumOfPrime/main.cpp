#include<iostream>
using namespace std;

bool checkPrime(int);
int main()
{
	int N, count = 0;
	cout << "Enter the value of N: ";
	cin >> N;
	cout << endl;
	for (int i = 2; i <= (N / 2); ++i)
	{
		if (checkPrime(i) and checkPrime(N-i))
		{
			cout << N << " = " << i << " + " << N - i << endl;;
			count++;
		}
	}
	cout << endl << "No. of ways: " << count << endl;
	return 0;
}


bool checkPrime(int v)
{
	if (v <= 1)
		return false;
	bool flag = true;
	for (int i = 2; i <= (v / 2); ++i)
	{
		if (v % i == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}