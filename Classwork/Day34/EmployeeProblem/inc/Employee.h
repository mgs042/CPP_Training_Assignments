#pragma once
#include<fstream>
class Employee
{
protected:
	int empId;
	char empName[20];
	char empAddress[50];
	char empDepartment[20];
public:
	void setId(int);
	void setName(char[]);
	void setAddress(char[]);
	void setDepartment(char[]);
	int getId();
	char* getName();
	char* getAddress();
	char* getDepartment();
	virtual void display();
	virtual void writeToFile(const char*);
};