#include<iostream>
#include<string>
#include<Employee.h>
#include<EmpList.h>
using namespace std;

int EmpList::count = 0;
EmpList::EmpList()
{
	head = nullptr;
}
Employee* EmpList::searchId(int key)
{
	Employee* ptr = head;
	while (ptr != nullptr)
	{
		if (ptr->getId() == key)
			return ptr;
		ptr = ptr->getNext();
	}
	return nullptr;
}
void EmpList::addEmployee(int i, string n, float s)
{
	if (searchId(i) != nullptr)
	{
		cout << "Unique ID required" << endl;
		return;
	}
	Employee* newNode = new Employee(i, n, s, nullptr);
	count++;
	if (head == nullptr)
	{
		head = newNode;
		cout << "Employee added: " << newNode->getName() << endl;
		return;
	}
	Employee* ptr = head;
	while (ptr->getNext() != nullptr)
	{
		ptr = ptr->getNext();
	}
	ptr->setNext(newNode);
	cout << "Employee added: " << newNode->getName() << endl;
}
void EmpList::displayEmployees()
{
	cout << "--- All Employees ---" << endl;
	Employee* ptr = head;
	while (ptr != nullptr)
	{
		cout << "ID: " << ptr->getId() << ", Name: " << ptr->getName() << ", Salary: " << int(ptr->getSalary()) << endl;
		ptr = ptr->getNext();
	}
}
void EmpList::deleteEmployee(int i)
{
	Employee* ptr1 = head, *ptr2 = nullptr;
	if (ptr1->getId() == i)
	{
		head = head->getNext();
		cout << "Employee with ID " << ptr1->getId() << " deleted." << endl;
		delete ptr1;
		count--;
		return;
	}
	while (ptr1 != nullptr)
	{
		if (ptr1->getId() == i)
			break;
		ptr2 = ptr1;
		ptr1 = ptr1->getNext();
	}
	ptr2->setNext(ptr1->getNext());
	cout << "Employee with ID " << ptr1->getId() << " deleted." << endl;
	delete ptr1;
	count--;

}
void EmpList::searchEmployee(string n)
{
	cout << "--- Search Result ---" << endl;
	Employee* ptr = head;
	while (ptr->getNext() != nullptr)
	{
		if(ptr->getName()==n)
			cout << "ID: " << ptr->getId() << ", Name: " << ptr->getName() << ", Salary: " << int(ptr->getSalary()) << endl;
		ptr = ptr->getNext();
	}
}
void EmpList::updateSalary(int i, float s)
{
	Employee* ptr = searchId(i);
	if (ptr != nullptr)
	{
		ptr->setSalary(s);
		cout << "Salary updated for ID " << ptr->getId() << endl;
	}
	else
	{
		cout << "ID does not match" << endl;
	}
}
int EmpList::countEmployees()
{
	return count;
}