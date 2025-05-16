#include<iostream>
using namespace std;

int main()
{
	int* ptr = nullptr;
	int a = 20;
	cout << a << endl;
	cout << &a << endl;
	cout << endl;
	cout << ptr << endl;
	cout << &ptr << endl;
	//cout << *ptr << endl;
	cout << endl;
	ptr = &a;
	cout << ptr << endl;
	cout << &ptr << endl;
	cout << *ptr << endl;
	return 0;
}