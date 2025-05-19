#include<iostream>
#include<cstring>
using namespace std;

typedef struct date
{
	int day, month, year;
}DATE;

typedef struct address
{
	int hNo;
	int pincode;
	string addressLine1;
	string addressLine2;
	string city;
	string state;

}ADDRESS;


typedef struct employee
{
	int empID;
	char name[20];
	DATE joiningDate;
	ADDRESS empAddress;
}EMP;

int main()
{
	EMP e;
	e.empID = 1;
	strcpy_s(e.name, "M Gouri Sankar");
	e.joiningDate.day = 4;
	e.joiningDate.month = 1;
	e.joiningDate.year = 2002;
	e.empAddress.hNo = 24;
	e.empAddress.pincode = 12345;
	e.empAddress.addressLine1 = "Kollemkode District";
	e.empAddress.addressLine2 = "KK";
	e.empAddress.city = "Chennai";
	e.empAddress.state = "kerala";
	cout << "Employee ID: " << e.empID << endl;
	cout << "Employee Name: " << e.name << endl;
	cout << "Joining Date: " << e.joiningDate.day << "/" << e.joiningDate.month << "/" << e.joiningDate.year << endl;
	cout << "Employee Address: " << e.empAddress.hNo << " " << e.empAddress.addressLine1 << " " << e.empAddress.addressLine2 << " " << e.empAddress.city << " " << e.empAddress.pincode << " " << e.empAddress.state << endl;
	return 0;
}
