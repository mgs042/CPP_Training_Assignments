/*
1) The basic salary is entered. House rent allowance is 40 % of basic salary & dearness
allowance is 20% of basic salary. write a program to calculate the gross salary.
*/
#include<iostream>
using namespace std;

int main()
{
	float basicSalary, houseRent, dearnessAllowance, grossSalary;
	cout << "Enter the basic salary: ";
	cin >> basicSalary;
	houseRent = basicSalary * 0.4;
	dearnessAllowance = basicSalary * 0.2;
	grossSalary = basicSalary + houseRent + dearnessAllowance;
	cout << endl << "House Rent: " << houseRent << endl;
	cout << endl << "Dearness Allowance: " << dearnessAllowance << endl;
	cout << endl << "Gross Salary: " << grossSalary << endl;
}