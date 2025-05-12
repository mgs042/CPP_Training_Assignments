/*
52) Write a program in C++ to check whether the primitive values crossing the limits or not.
*/

#include<iostream>
#include<climits>
#include<cfloat>
using namespace std;

int main()
{
	int a;
	char b;
	float c;
	double d;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	if (a<INT_MIN || a>INT_MAX)
		cout << "INT crossing limits" << endl;
	else
		cout << "INT within limits" << endl;
	if (b<CHAR_MIN || b>CHAR_MAX)
		cout << "CHAR crossing limits" << endl;
	else
		cout << "CHAR within limits" << endl;
	if (c<FLT_MIN || c>FLT_MAX)
		cout << "FLOAT crossing limits" << endl;
	else
		cout << "FLOAT within limits" << endl;
	if (d<DBL_MIN || a>DBL_MAX)
		cout << "DOUBLE crossing limits" << endl;
	else
		cout << "DOUBLE within limits" << endl;
	return 0;
}