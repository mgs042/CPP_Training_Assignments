#include<Developer.h>
Developer::Developer(unsigned int empId, string name, unsigned int codingHours) : Employee(empId, name)
{
	this->codingHours = codingHours;
}

int Developer::calculateSalary(unsigned int codingHours)
{
	return 500 * this->codingHours;
}
