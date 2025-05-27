#include<Manager.h>
Manager::Manager(unsigned int empId, string name, short unsigned int teamSize) :Employee(empId, name)
{
	this->teamSize = teamSize;
}