/*
Problem 1: Number-Star Pattern
Problem Statement :Write the program for number and star pattern printing given n value.
Input Format : Take N as input of type integer.
Output Format : Print number and star pattern printing

Constraints:
4<=N<=10

Sample Input1:
5
Sample Output1:

*
*1*
*121*
*12321*
*1234321*
*123454321*
*1234321*
*12321*
*121*
*1*
*
*/

#include<iostream>
using namespace std;

int main()
{
	int n, itr1, itr2, itr3; //declaring input and iterator variables
	cout << "Enter the input: ";
	cin >> n;
	if (n < 4 || n>10)  //since constraints are 4<=N<=10
	{
		cout << "Invalid Input" << endl;
		exit(0);
	}
	cout << endl;
	cout << "*" << endl; //initial *
	for (itr1 = 1;itr1 <= n;++itr1) //for the first n lines
	{
		cout << "*";
		for (itr2 = 1; itr2 <= itr1; ++itr2) //for the forward sequence in each line
			cout << itr2;
		for (itr3 = itr1 - 1;itr3 >= 1;--itr3) //for the backward sequence in each line
			cout << itr3;
		cout << "*" << endl;
	}
	for (itr1 = n-1;itr1 >= 1;--itr1) //for the next n-1 lines
	{
		cout << "*";
		for (itr2 = 1; itr2 <= itr1; ++itr2) //for the forward sequence in each line
			cout << itr2;
		for (itr3 = itr1 - 1;itr3 >= 1;--itr3) //for the backward sequence in each line
			cout << itr3;
		cout << "*" << endl;
	}
	cout << "*"<<endl; //last *
	return 0;
}