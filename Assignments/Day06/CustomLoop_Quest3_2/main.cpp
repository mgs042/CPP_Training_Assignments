/*
Q2.
Write the logic to print right triangle star pattern.

Input Format  : First line contains N of type integer.

Output Format : Print the right triangle star pattern.

Constrains:
2<=N<=10

Sample Input:
5
Sample Output:
*
**
***
****
*****
****
***
**
*

*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j >= 0; --j)
			cout << "*";
		cout << endl;
	}
	for (int i = n - 1; i > 0; --i)
	{
		for (int j = i;j > 0;--j)
			cout << "*";
		cout << endl;
	}
	return 0;
}
