#pragma once
#include<string>
using namespace std;

class Employee
{
	int empId;
	string empName;
public:
	void setEmpId(int id)
	{
		empId = id;
	}
	void setEmpName(string name)
	{
		empName = name;
	}
	int getEmpId()
	{
		return empId;
	}
	string getEmpName()
	{
		return empName;
	}
};