#include<iostream>
using namespace std;

typedef union employee
{
	int empId;
	char name[20];
}EMP;

int main()
{
	EMP e;
	e.empId = 101;
	cout << e.empId << endl;
	strcpy_s(e.name,"Gouri");
	cout << e.empId << endl;
	cout << e.name << endl;
	return 0;
}
