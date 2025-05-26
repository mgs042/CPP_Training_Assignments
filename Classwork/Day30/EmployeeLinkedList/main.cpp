#include<iostream>
#include<string>
#include<EmpList.h>
using namespace std;


int main()
{
	int choice;
	int id;
	string name;
	float salary;
	EmpList list;
	while (1)
	{
		cin >> choice;
		switch (choice)
		{
		case 0:
			exit(0);
			break;
		case 1:
			cin >> id >> name >> salary;
			list.addEmployee(id, name, salary);
			break;
		case 2:
			cout << endl;
			list.displayEmployees();
			break;
		case 3:
			cin >> id;
			cout << endl;
			list.deleteEmployee(id);
			break;
		case 4:
			cin >> name;
			cout << endl;
			list.searchEmployee(name);
			break;
		case 5:
			cin >> id >> salary;
			cout << endl;
			list.updateSalary(id, salary);
			break;
		case 6:
			cout << endl;
			cout << "Total Employees: " << list.countEmployees();
			break;
		default:
			break;
		}
	}
}