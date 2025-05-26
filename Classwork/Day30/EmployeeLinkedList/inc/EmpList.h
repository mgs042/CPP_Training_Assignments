#pragma once
#include<Employee.h>
#include<string>
using namespace std;
class EmpList
{
	static int count;
	Employee* head;
	Employee* searchId(int);
public:
	EmpList();
	void addEmployee(int, string, float);
	void displayEmployees();
	void deleteEmployee(int);
	void searchEmployee(string);
	void updateSalary(int, float);
	static int countEmployees();
};
