#include<iostream>
using namespace std;

int main()
{
	int a[] = { 10,20,30 };
	int* ptr;
	cout << *ptr << endl;
	cout << *(ptr + 1) << endl;
	cout << (*ptr + 2) << endl;
	cout << endl;
	for (int i = 0;i < 3;++i)
	{
		cout << *ptr << endl;
		ptr++;
	}
}