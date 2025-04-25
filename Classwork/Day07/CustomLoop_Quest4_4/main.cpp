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
	unordered_map<int, int> dict1;
	unordered_map<int, int> dict2;
	int M, N, sum1=0, sum2=0, t;
	cout << "Enter the value of M: ";
	cin >> M;
	cout << "Enter the value of N: ";
	cin >> N;
	while (M > 0)
	{
		t = M % 10;
		if (dict1.count(t) == 0)
		{
			sum1 += t;
		}
		dict1[t] = 1;
		M /= 10;
	}
	while (N > 0)
	{
		t = N % 10;
		if (dict2.count(t) == 0)
		{
			sum2 += t;
		}
		dict2[t] = 1;
		N /= 10;
	}
	cout << "Sum of distinct digits of M:" << sum1<<endl;
	cout << "Sum of distinct digits of N:" << sum2 << endl;

}