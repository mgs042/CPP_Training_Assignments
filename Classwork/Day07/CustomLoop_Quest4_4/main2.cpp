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
using namespace std;

int main()
{
	int M, N, sum1 = 0, sum2 = 0, t, m[10], n[10], k;
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
		k = 0;
		flag = true;
		while (m[k] != -1)
		{
			if (m[k] == t)
				flag = false;
			k++;
		}
		if (flag)
		{
			sum1 += t;
			m[k] = t;
		}
		M /= 10;
	}
	while (N > 0)
	{
		t = N % 10;
		k = 0;
		flag = true;
		while (n[k] != -1)
		{
			if (n[k] == t)
				flag = false;
			k++;
		}
		if (flag)
		{
			sum2 += t;
			n[k] = t;
		}
		N /= 10;
	}
	cout << "Sum of distinct digits of M:" << sum1 << endl;
	cout << "Sum of distinct digits of N:" << sum2 << endl;

}