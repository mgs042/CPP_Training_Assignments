/*
Find the number of ways a number N can be expressed as a sum of prime nos.
*/

#include<iostream>
using namespace std;

#define MAX 100

int findPrimeNos(int, int *);

int main()
{
	int num, arr[MAX], count=0;
	cout << "Enter the input: ";
	cin >> num;
	cout << endl;
	int size = findPrimeNos(num, arr);
	
	for (int i = 0; i < size; ++i)
	{
		for (int j = i + 1; j < size; ++j)
		{
			if (arr[i] + arr[j] == num)
			{
				cout << num << " = " << arr[i] << " + " << arr[j] << endl;
				count++;
			}
		}
	}
	cout << endl << "Number of ways: " << count << endl;
	return 0;
}

int findPrimeNos(int n, int* arr)
{
	int k = 0;
	bool flag;
	for (int j = 2; j <= n; j++)
	{
		flag = true;
		for (int i = 2; i <= (n / 2); i++)
		{
			cout << i;
			if (n % i == 0)
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			arr[k] = j;
			cout << j << endl;
			k++;
		}

	}
	for (int i = 0; i < 10; ++i)
		cout << arr[i] << endl;
	return k;
}