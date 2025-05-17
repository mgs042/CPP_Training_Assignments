#include<iostream>
using namespace std;

typedef struct Employee
{
	int empID;
	string empName;
	string address;
	string phoneNo;
	char empGender;

}EMP;

EMP* getInput(EMP e[]);
void display(EMP *e);

int main()
{
	EMP e1;
	cout << "Size of EMP: " << sizeof(EMP) << "\tSize: " << sizeof(e1) << endl;
	cout << endl;
	/*e1.empID = 1;
	e1.empName = "Gouri Sankar";
	e1.address = "House";
	e1.phoneNo = "1245678";
	e1.empGender = 'M';
	cout << "Employee ID: " << e1.empID << endl;
	cout << "Employee Name: " << e1.empName << endl;
	cout << "Employee address: " << e1.address << endl;
	cout << "Employee Phone No: " << e1.phoneNo << endl;
	cout << "Employee Gender: " << e1.empGender << endl;*/

	EMP e2[3];
	EMP *e = getInput(e2);
	display(e);
	cout << endl;
	return 0;
}


EMP* getInput(EMP e[])
{
	for (int i = 0; i < 3; ++i)
	{
		cout << "Employee ID: ";
		cin >> e[i].empID;
		cout << "Employee Name: ";
		cin >> e[i].empName;
		cout << "Employee address: ";
		cin >> e[i].address;
		cout << "Employee Phone No: ";
		cin >> e[i].phoneNo;
		cout << "Employee Gender: ";
		cin >> e[i].empGender;
		cout << endl;
	}
	return e;
}

void display(EMP *e)
{
	for (int i = 0; i < 3; ++i)
	{
		cout << "Employee ID: " << (e+i)->empID << endl;
		cout << "Employee Name: " << (e + i)->empName << endl;
		cout << "Employee address: " << (e + i)->address << endl;
		cout << "Employee Phone No: " << (e + i)->phoneNo << endl;
		cout << "Employee Gender: " << (e + i)->empGender << endl;
		cout << endl;
	}
}