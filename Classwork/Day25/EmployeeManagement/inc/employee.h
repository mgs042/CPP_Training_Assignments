#pragma once
#include<iostream>
#include<cstring>
using namespace std;
typedef struct employee
{
	bool isActive;
	int empId;
	string empName;
	struct
	{
		int houseNo;
		int pincode;
		string addressLine;
		string city;
		string state;
	}empAddress;
	struct
	{
		float basicPay;
		float variablePay;
		float allowance;
	}empSalary;
}EMP;


bool addEmployee(EMP [], int);
bool removeEmployee(EMP [], int, int);
int searchEmployee(EMP [], string, int);
void displayEmployee(EMP [], int);
bool calculateSalary(EMP);