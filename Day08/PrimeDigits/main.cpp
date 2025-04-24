/*
Find the Nth number with prime digits only
*/
#include<iostream>
using namespace std;

bool checkPrime(int);
int main()
{
	int N, i = 1, count = 0, t, itr=1;
	bool flag;
	cout << "Enter the value of N: ";
	cin >> N;
	while (count != N)
	{
		flag = true;
		t = itr;
		while (t > 0)
		{
			if (!checkPrime(t % 10))
			{
				flag = false;
				break;
			}
			t /= 10;
		}
		if (flag)
			count++;
		if (count == N)
			cout << "The "<<N<<"th number with Prime digits only is "<<itr << endl;
		itr++;
	}
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