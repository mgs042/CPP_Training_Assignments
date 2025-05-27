#pragma once
#include<Employee.h>
class Developer : public virtual Employee
{
protected:
	unsigned int codingHours;
	int calculateSalary(unsigned int);
public:
	Developer(unsigned int, string, unsigned int);
};
