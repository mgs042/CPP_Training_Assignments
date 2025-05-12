#include<iostream>
using namespace std;

int main()
{
	int a[] = { 10,20,30 };
	int* ptr = a;
	cout << ++ (* ptr) << endl;
	cout << *ptr++ << endl;
	cout << *(ptr) << endl;
	cout << endl;

	char b[] = { '1','2','3' };
	char* ptr1 = b;
	cout << (unsigned long int)ptr1 << endl;
	cout << (unsigned long int)(ptr1 + 1) << endl;
	cout << (unsigned long int)(ptr1 + 2) << endl;
	return 0;
}