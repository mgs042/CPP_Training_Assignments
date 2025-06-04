#include<iostream>
#include<TechLead.h>
using namespace std;

TechLead::TechLead(unsigned int empId, string name, unsigned int codingHours, short unsigned int teamSize):Employee(empId, name), Developer(empId, name, codingHours), Manager(empId, name, teamSize)
{}

int TechLead::calculateSalary(unsigned int codingHours, short unsigned int teamSize)
{
	return this->codingHours * 500 + this->teamSize * 5000;
}

void TechLead::display()
{
	cout << "TechLead info: " << endl;
	cout << "EmpId: " << this->empId << endl;
	cout << "Name: " << this->name << endl;
	cout << endl;
	cout << "Salary based on coding: " << Developer::calculateSalary(this->codingHours) << endl;
	cout << "Salary based on coding + team: " << this->calculateSalary(this->codingHours, this->teamSize) << endl;

}