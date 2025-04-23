#include<iostream>
#include "stringHandling.h"
#include<cstring>
using namespace std;

void stringHandling()
{
	char ch = 'A';
	char fName[20];
	string sName;

	/*
	cout << "ch Value: " << ch << endl;
	cout << "Enter First Name: ";
	cin >> fName;
	cout << "Enter Second Name: ";
	cin >> sName;
	cout << "\nMy name is " << fName << " " << sName << endl;
	*/

	char name[] = "Hello World";
	cout << "Size of Array: "<<sizeof(name)<<endl;
	cout << "Size of String: " << strlen(name)<<endl;
	cout << "\n\n";
	for (int i = 0; i < sizeof(name) - 1; ++i)
	{
		printf("\n%c = %d", name[i], name[i]);
	}
	cout << "\n\n";
	cout << "Hellooooo\rWorld" << endl; //carriage return, mves cursor to the starting of the current line, so World overwrites Hello
	cout << "hello\b" << endl; // \b is backspace
	cout << "hello\aWorld" << endl; // \a is alert sound

}