#include<Employee.h>
#include<iostream>
using namespace std;

void Employee::setId(int empId)
{
	this->empId = empId;
}

void Employee::setName(char empName[])
{
	strcpy_s(this->empName, empName);
}

void Employee::setAddress(char empAddress[])
{
	strcpy_s(this->empAddress, empAddress);
}

void Employee::setDepartment(char empDepartment[])
{
	strcpy_s(this->empDepartment, empDepartment);
}

int Employee::getId()
{
	return this->empId;
}

char* Employee::getName()
{
	return this->empName;
}

char* Employee::getAddress()
{
	return this->empAddress;
}

char* Employee::getDepartment()
{
	return this->empDepartment;
}

void Employee::display()
{
	cout << "\tEmployee Details" << endl;
	cout << "Employee Id: " << empId << endl;
	cout << "Employee Name: " << empName << endl;
	cout << "Employee Address: " << empAddress << endl;
	cout << "Employee Department: " << empDepartment << endl;
	cout << "-----------------------------------------------" << endl << endl;
}

void Employee::writeToFile(const char * filename)
{
	ofstream file;
	file.open(filename, ios::app);
	file.write((char*)this, sizeof(*this));
	file.close();
}