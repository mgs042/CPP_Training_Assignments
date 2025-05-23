#pragma once
#include<iostream>
#include<Employee.h>
#define MAX 10

class EmpStack
{
	Employee e[MAX];
	int top;
public:
	EmpStack()
	{
		top = -1;
	}
	bool push(int id, string name)
	{
		if (top == MAX - 1)
		{
			cout << "Stack Full" << endl;
			return false;
		}
		top++;
		e[top].setEmpId(id);
		e[top].setEmpName(name);
		return true;
	}
	Employee pop()
	{
		if (top == -1)
		{
			cout << "Stack Empty" << endl;
		}
		else
		{
			return e[top--];
		}

	}
	void display()
	{
		cout << "--------------------------------Employees--------------------------------" << endl;
		for (int i = top; i >= 0; --i)
		{
			cout << "Employee ID: " << e[i].getEmpId() << endl;
			cout << "Employee Name: " << e[i].getEmpName() << endl;
			cout << endl;
		}
	}
};