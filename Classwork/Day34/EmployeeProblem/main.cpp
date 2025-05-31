#include<iostream>
#include<Financial.h>
#include<vector>
using namespace std;


int main()
{
	Financial f;
	vector<Financial>arr;
	char ch = 'y';
	int id;
	char name[20], address[50], department[20];
	float bSal, vPay, pF;
	while (ch == 'y')
	{
		cout << "Enter Employee ID: ";
		cin >> id;
		cout << "Enter Employee Name: ";
		cin.ignore();
		cin.getline(name, 19);
		cout << "Enter Employee Address: ";
		cin.ignore();
		cin.getline(address, 19);
		cout << "Enter Employee Department: ";
		cin.ignore();
		cin.getline(department, 19);
		cout << "Enter Employee Base Salary: ";
		cin >> bSal;
		cout << "Enter Employee Variable Pay: ";
		cin >> vPay;
		cout << "Enter Employee PF: ";
		cin >> pF;
		f.setId(id);
		f.setName(name);
		f.setAddress(address);
		f.setDepartment(department);
		f.setBaseSalary(bSal);
		f.setVariablePay(vPay);
		f.setPf(pF);
		arr.push_back(f);
		cout << endl << "Do you wish to continue? [y/n]: ";
		cin >> ch;
		cout << endl;
	}
	for (auto i : arr)
	{
		i.writeToFile("Financial.txt");
	}

	cout << "Reading from file: " << endl;
	ifstream fRead("Financial.txt", ios::in);
	while (fRead.read((char*)&f, sizeof(f)))
	{
		f.display();
	}
}