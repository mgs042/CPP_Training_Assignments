#pragma once
#include<Developer.h>
#include<Manager.h>
class TechLead:public Developer, Manager
{
private:
	int calculateSalary(unsigned int, short unsigned int);
public:
	TechLead(unsigned int, string, unsigned int, short unsigned int);
	void display();
};
