/*
4) Isha is playing with numbers and trying to write program to Check if the sum of distinct digits of two integers are equal

Output Format:
If  the sum of distinct digits of both the numbers are equal
if true	print YES
otherwise  print NO.

Examples:
Input:
 2452
 9222
Output:
 YES

Input
121
3035
Output:
 NO
*/
#include<iostream>
#include<unordered_map>
#define MAX 20
using namespace std;

int main()
{
	int M, N, sum1 = 0, sum2 = 0, t, m[MAX], n[MAX], itr1=0,itr2=0;
	bool flag;
	memset(m, -1, sizeof(m));
	memset(n, -1, sizeof(n));
	cout << "Enter the value of M: ";
	cin >> M;
	cout << "Enter the value of N: ";
	cin >> N;
	while (M > 0)
	{
		t = M % 10;
		m[itr1] = t;
		M /= 10;
		itr1++;
	}
	while (N > 0)
	{
		t = N % 10;
		n[itr2] = t;
		N /= 10;
		itr2++;
	}
	for (int i = 0; i < MAX; ++i)
	{
		flag = true;
		for (int j = 0; j < MAX; ++j)
		{
			if (i != j)
			{
				if (m[i] == m[j])
					flag = false;
			}
			
		}
		if (flag)
			sum1 += m[i];
	}
	for (int i = 0; i < MAX; ++i)
	{
		flag = true;
		for (int j = 0; j < MAX; ++j)
		{
			if (i != j)
			{
				if (n[i] == n[j])
					flag = false;
			}
			
		}
		if (flag)
			sum2 += n[i];
	}
	cout << "Sum of distinct digits of M:" << sum1 << endl;
	cout << "Sum of distinct digits of N:" << sum2 << endl;
	if (sum1 == sum2)
		cout << "YES";
	else
		cout << "N";
}