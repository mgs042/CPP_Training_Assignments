#pragma once
#include<Employee.h>
#include<string>
using namespace std;

class Financial :public Employee
{
private:
	float empBaseSalary;
	float empVariablePay;
	float empPf;
	float calculateTax();
public:
	void setBaseSalary(float);
	void setVariablePay(float);
	void setPf(float);
	float getBaseSalary();
	float getVariablePay();
	float getPf();
	void display();
	void writeToFile(const char*);
	bool readFromFile(ifstream);
};