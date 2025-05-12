#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int* ptr = (int *)malloc(sizeof(int)*3);
	*ptr = 10;
	*(ptr + 1) = 20;
	*(ptr + 2) = 30;
	cout << *ptr << endl;
	cout << *++ptr << endl;
	cout << *++ptr << endl;
	return 0;

}