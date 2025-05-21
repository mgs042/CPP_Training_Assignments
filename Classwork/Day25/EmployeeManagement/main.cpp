#include<iostream>
#include<employee.h>
using namespace std;


int main()
{
	EMP* e = nullptr;
	int size = 0, choice = 0, id;
	string key;
	while (1)
	{
		cout << "\t\tMenu" << endl;
		cout << "\t\t~~~~" << endl;
		cout << "1. Add Employee" << endl;
		cout << "2. Remove Employee" << endl;
		cout << "3. Display Employee" << endl;
		cout << "4. Search Employee" << endl;
		cout << "5. Exit" << endl;
		cout << endl << "Enter your choice: ";
		cin >> choice;
		cout << endl;
		switch (choice)
		{
			case 1:
				if(addEmployee(e, size))
					size++;
				break;
			case 2:
				cout << "Enter ID of Employee to be removed: ";
				cin >> id;
				if (removeEmployee(e, id, size))
					size++;
				break;
			case 3:
				displayEmployee(e, size);
				break;
			case 4:
				cout << "Enter the name to be searched for: ";
				cin >> key;
				searchEmployee(e, key, size);
				break;
			case 5:
				exit(0);
				break;
			default:
				cout << "Invalid Choice" << endl;
				break;
		}
	}
}