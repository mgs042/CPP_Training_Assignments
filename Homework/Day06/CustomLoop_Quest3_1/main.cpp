/*
Q1.
Write the logic to print star pattern or rectangle star pattern.

Input Format  : First line contains N of type integer.

Output Format : Print the rectangle star pattern.

Constrains:
2<=N<=10

Sample Input:
5

Sample Output:
*****
*****
*****
*****
*****

*/
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the value of N: ";
	cin >> n;

	for (int i = 0; i < n;++i)
	{
		for (int j = 0;j < n;++j)
			cout << '*';
		cout << endl;
	}
	return 0;
}