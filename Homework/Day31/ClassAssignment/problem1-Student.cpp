#include<iostream>
#include<string>
#include<Student.h>
using namespace std;

Student::Student(unsigned int rollNo, string name, short unsigned int age)
{
	this->rollNo = rollNo;
	this->name = name;
	this->age = age;
}

void Student::display() const
{
	cout << endl;
	cout << "Student Info: " << endl;
	cout << "Roll No: " << this->rollNo << endl;
	cout << "Name: " << this->name << endl;
	cout << "Age: " << this->age << endl;
	cout << endl;

}