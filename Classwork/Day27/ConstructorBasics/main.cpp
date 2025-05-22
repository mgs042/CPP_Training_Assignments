#include<iostream>
using namespace std;

class Employee
{
	int empId;
	string empName;
public:
	Employee()
	{
		cout << "Default Constructor called" << endl;
		empId = 0;
		empName = "-----";
	}
	Employee(int id, string name)
	{
		cout << "Parametrized Constructor called" << endl;
		empId = id;
		empName = name;
	}
	~Employee()	//destructor - used to cleanup the memory
	{
		cout << "Destructor called" << endl;
	}
	void disp()
	{
		cout << "Display function called" << endl;
		cout << empId << " " << empName << endl;
	}
};

int main()
{
	Employee e; //default constructor
	e.display();
	Employee e1(2, "ABC"); //parametrized constructor
	e1.display();
	Employee e2 = e1; //Copy Costructor
	e2.display();
	Employee e3(e2); //copy constructor
	e3.display();
	return 0;
}