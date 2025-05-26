#include<iostream>
#include<string>
#include<Employee.h>
using namespace std;

Employee::Employee()
{
	id = 0;
	name = "";
	salary = 0.0;
	next = nullptr;
}

Employee::Employee(int i, string n, float s, Employee* ptr)
{
	id = i;
	name = n;
	salary = s;
	next = ptr;
}

bool Employee::setId(int i)
{
	id = i;
	return true;
}
bool Employee::setName(string n)
{
	if (n.length() <= 0 || n.length() > 50)
		return false;
	else
	{
		name = n;
		return true;
	}
}
bool Employee::setSalary(float s)
{
	if (s < 0)
		return false;
	else
	{
		salary = s;
		return true;
	}
}
bool Employee::setNext(Employee* ptr)
{
	next = ptr;
	return true;
}
int Employee::getId()
{
	return id;
}
string Employee::getName()
{
	return name;
}
float Employee::getSalary()
{
	return salary;
}
Employee* Employee::getNext()
{
	return next;
}