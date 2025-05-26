#pragma once
#include<string>
using namespace std;
class Employee
{
	int id;
	string name;
	float salary;
	Employee* next;
public:
	Employee();
	Employee(int, string, float, Employee*);
	bool setId(int);
	bool setName(string);
	bool setSalary(float);
	bool setNext(Employee*);
	int getId();
	string getName();
	float getSalary();
	Employee* getNext();
};