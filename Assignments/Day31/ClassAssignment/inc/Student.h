#pragma once
#include<string>
using namespace std;
class Student
{
private:
	unsigned int rollNo;
	string name;
	unsigned int age;
public:
	Student(unsigned int, string, short unsigned int);
	void display() const;
};