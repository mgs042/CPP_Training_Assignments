#include<iostream>
#include<Financial.h>
using namespace std;

float Financial::calculateTax()
{
	return (empBaseSalary + empVariablePay - empPf) * (float)0.4;
}

void Financial::setBaseSalary(float empBaseSalary)
{
	this->empBaseSalary = empBaseSalary;
}
void Financial::setVariablePay(float empVariablePay)
{
	this->empVariablePay = empVariablePay;
}
void Financial::setPf(float empPf)
{
	this->empPf = empPf;
}
float Financial::getBaseSalary()
{
	return this->empBaseSalary;
}
float Financial::getVariablePay()
{
	return this->empVariablePay;
}
float Financial::getPf()
{
	return this->empPf;
}
void Financial::display()
{
	cout << "\tFinance Details" << endl;
	cout << "Employee Id: " << empId << endl;
	cout << "Employee Name: " << empName << endl;
	cout << "Employee Address: " << empAddress << endl;
	cout << "Employee Department: " << empDepartment << endl;
	cout << "Employee Base Salary: " << empBaseSalary << endl;
	cout << "Employee Variable Pay: " << empVariablePay << endl;
	cout << "Employee PF: " << empPf << endl;
	cout << "Employee Tax: " << calculateTax() << endl;
	cout << "-----------------------------------------------" << endl << endl;
}
void Financial::writeToFile(const char* filename)
{
	ofstream file;
	file.open(filename, ios::app);
	file.write((char*)this, sizeof(*this));
	file.close();
}

//bool Financial::readFromFile(ifstream file)
//{
//	if ()
//	{
//		this->display();
//		return true;
//	}
//	return false;
//}