/*
Q.2
Given an array A of N positive numbers. The task is to find the position
where equilibrium first occurs in the array. Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of   elements after it.

Input Format:
The first line contains an integer, denoting the size of the array.
The second line contains integers denoting the elements
of the array.
Constraints
1<= n<=100
1<=arr<= 1000, where arr is the ith element of the array.

Output Format:
The output line contains integer denoting an equilibrium
index (if any) or -1 (if no equilibrium indexes exist).

TESTCASE 1:
Input:
7
[-7, 1, 5, 2, -4, 3, 0]

o/p
3

I/p
5
[0 0 0 0 -1]

o/p
4

*/

#include<iostream>
using namespace std;

#define MAX 100

int main()
{
	int n, arr[MAX], eq=0, sumLeft,sumRight;
	cout << "Enter the size: ";
	cin >> n;
	cout << endl;
	cout << "Enter the array elements: ";
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	cout << endl;
	while (eq < n)
	{
		sumLeft = 0;
		sumRight = 0;
		for (int i = eq - 1; i >= 0; i--)
			sumLeft += arr[i];
		for (int j = eq + 1;j < n;++j)
			sumRight += arr[j];
		if (sumLeft == sumRight)
		{
			cout << "Equilibrium Point: " << eq << endl;
			break;
		}
		else
		{
			eq++;
		}

	}
}