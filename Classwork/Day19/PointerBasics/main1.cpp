/*
Pointers
*/

#include<iostream>
using namespace std;

int main()
{
	int a = 10000;
	char ch = 'a';
	float f = 3.2;
	/*int* ptr = nullptr;
	int b = 30;
	cout << "Address of a: " << (unsigned long int) & a << " value is: " << a << endl;
	cout << "Address of ch: " << (unsigned long int) & ch << " value is: " << ch << endl;
	cout << "Address of f: " << (unsigned long int) & f << " value is: " << f << endl;
	cout << "Address of ptr: " << (unsigned long int) & ptr << " value is: " << ptr << endl;
	ptr = &a;
	cout << "Address of ptr: " << (unsigned long int) & ptr << " value is: " << (unsigned long int) ptr << endl;
	cout << "ptr is pointing to: " << (unsigned long int) ptr << " value being pointed to: " << *ptr << endl;
	cout << endl;
	ptr = &b;
	cout << "Address of ptr: " << (unsigned long int) & ptr << " value is: " << (unsigned long int) ptr << endl;
	cout << "ptr is pointing to: " << (unsigned long int) ptr << " value being pointed to: " << *ptr << endl;
	cout << endl;
	*ptr = 101;
	cout << "Address of b: " << (unsigned long int) & b << " value is: " << b << endl;*/

	char* ptr = (char*) & a;
	cout << "Address of ptr: " << (unsigned long int) & ptr << " value is: " << (unsigned long int) ptr << endl;
	cout << "ptr is pointing to: " << (unsigned long int) ptr << " value being pointed to: " << *ptr << endl;

	int* ptr1 = nullptr;
	cout << *ptr1;
	return 0;
}