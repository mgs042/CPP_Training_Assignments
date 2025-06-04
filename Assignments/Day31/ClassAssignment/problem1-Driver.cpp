#include<iostream>
#include<string>
#include<Marks.h>
using namespace std;

int main()
{
	unsigned int rollNo;
	string name;
	short unsigned int age;
	float marks[3];
	cout << "Enter Roll No: ";
	cin >> rollNo;
	cout << "Enter Name: ";
	cin.ignore();
	getline(cin, name);
	cout << name << endl;
	cout << "Enter Age: ";
	cin >> age;
	cout << "Enter Marks: ";
	cin >> marks[0] >> marks[1] >> marks[2];
	Marks obj(rollNo, name, age, marks[0], marks[1], marks[2]);
	obj.display();
	return 0;
}