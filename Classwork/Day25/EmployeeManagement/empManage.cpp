#include<iostream>
#include<cstdlib>
#include<cstring>
#include<employee.h>
using namespace std;

bool addEmployee(EMP e[], int size)
{
	static int id = 1;
	e = (EMP*)realloc(e, sizeof(EMP)*(size+1));
	if (e == nullptr)
		return false;
	EMP* ptr = e + size + 1;
	ptr->isActive = true;
	ptr->empId = id++;
	cout << "Enter Employee Name: ";
	cin >> ptr->empName;
	cout << "Enter Employee House No: ";
	cin >> ptr->empAddress.houseNo;
	cout << "Enter Employee Address Line: ";
	cin >> ptr->empAddress.addressLine;
	cout << "Enter Employee Pincode: ";
	cin >> ptr->empAddress.pincode;
	cout << "Enter Employee City: ";
	cin >> ptr->empAddress.city;
	cout << "Enter Employee State: ";
	cin >> ptr->empAddress.state;
	cout << "Enter Employee Basic Pay: ";
	cin >> ptr->empSalary.basicPay;
	cout << "Enter Employee Variable Pay: ";
	cin >> ptr->empSalary.variablePay;
	cout << "Enter Employee Allowance: ";
	cin >> ptr->empSalary.allowance;
	cout << endl << endl;
	return true;
}

void displayEmployee(EMP e[], int size)
{
	cout << "ID\tName\tSalary\tAddress" << endl;
	for (int i = 0; i < size; ++i)
	{
		if (!e[i].isActive)
			continue;
		cout << e[i].empId << "\t" << e[i].empName << "\t" << e[i].empSalary.basicPay + e[i].empSalary.variablePay + e[i].empSalary.allowance << "\t" << e[i].empAddress.houseNo << " " << e[i].empAddress.addressLine << " " << e[i].empAddress.pincode << " " << e[i].empAddress.city << " " << e[i].empAddress.state << endl;

	}
	cout << endl << endl;
}

bool removeEmployee(EMP e[], int id, int size)
{
	for (int i = 0; i < size; ++i)
	{
		if (e[i].empId == id)
		{
			e[i].isActive = false;
			return true;
		}
	}
	return false;
}


int searchEmployee(EMP e[], string key, int size)
{
	int count = 0, index = 0;
	cout << "Searching for Employees......." << endl;
	cout << "ID\tName\tSalary\tAddress" << endl;
	for (int i = 0; i < size; ++i)
	{
		if (e[i].empName.find(key) != string::npos)
		{
			index = i;
			count++;
			cout << e[i].empId << "\t" << e[i].empName << "\t" << e[i].empSalary.basicPay + e[i].empSalary.variablePay + e[i].empSalary.allowance << "\t" << e[i].empAddress.houseNo << " " << e[i].empAddress.addressLine << " " << e[i].empAddress.pincode << " " << e[i].empAddress.city << " " << e[i].empAddress.state << endl;

		}
	}
	if (count == 0)
		cout << "No employees found" << endl;
	else if (count == 1)
	{
		cout << "Employee Found" << endl;
		return index;
	}
	else
	{
		cout << "Multiple Employees Found" << endl;
		return -1;
	}
}