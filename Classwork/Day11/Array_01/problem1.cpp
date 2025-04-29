/*
Q1.
Problem Statement:
Given an unsorted array a of size N of non-negative integers,
find a continuous sub-array which adds to a given number sum.

Input Format:
The first line contains an integer, denoting the size of the array.
The second line contains integers denoting the elements
of the array.
The last line contains an integer, denoting the sum.

Constraints
1<= n<=100
1<=arr<= 1000, where arr is the ith element of the array.
1<= n<=100000

Output Format:
The output line contains integers denoting the indexes.

TESTCASE 1:
Input:
7
[1, 4, 0, 0, 3, 10, 5]

sum = 7
Output:
Sum found between indexes 1 and 4

TESTCASE 2:
Input:
2
[1, 4]
sum = 0
Output:
No subarray found
*/

#ifdef __INTELLISENSE__
#pragma diag_suppress 28
#endif

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the size of the array: ";
	cin >> n;
	int arr[100], sum, s, i, j;
	bool flag = false;
	cout << "Enter the elements of the array: ";
	for (int l = 0; l < n; ++l)
		cin >> arr[l];
	cout << "Enter the sum: ";
	cin >> sum;
	cout << endl;
	for (i = 0; i < n - 1; ++i)
	{
		for (j = n - 1;j >= i;--j)
		{
			s = 0;
			for (int k = i; k <= j; ++k)
			{
				s += arr[k];
			}
			if (s == sum)
			{
				flag = true;
				goto END;
			}
		}
	}
	END:
	if (flag)
		cout << "Sum found between indexes " << i << " and " << j << endl;
	else
		cout << "No subarray found" << endl;
	return 0;
}