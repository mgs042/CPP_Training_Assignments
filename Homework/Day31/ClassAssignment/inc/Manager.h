#pragma once
#include<Employee.h>
class Manager:public virtual Employee
{
protected:
	short unsigned int teamSize;
public:
	Manager(unsigned int, string, short unsigned int);
};