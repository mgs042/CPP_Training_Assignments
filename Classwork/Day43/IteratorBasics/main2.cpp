#include<iostream>
#include<vector>
#include<iterator>
#include<string>
#include<list>
#include<fstream>
class Employee
{
	int empId;
	std::string name;
public:
	Employee()
	{
		empId = 0;
		name = "";
	}
	Employee(int id, std::string n) : empId(id), name(n) {}
	void disp()
	{
		std::cout << "ID: " << empId << "\tName: " << name << std::endl;
	}
	void setID(int i)
	{
		empId = i;
	}
	void setName(std::string n)
	{
		name = n;
	}
	friend std::istream& operator>>(std::istream& is, Employee& e)
	{
		is >> e.empId;
		is >> e.name;
		return is;
	}
	friend std::ostream& operator<<(std::ostream& os, const Employee& e)
	{
		os << "ID: " << e.empId << "\t Name: " << e.name << std::endl;
		return os;
	}
};


int main()
{
	std::istream_iterator<Employee> inItr(std::cin);
	std::istream_iterator<Employee> endItr;

	std::list<Employee> empList;

	while (inItr != endItr)
	{
		empList.push_back(*inItr);
		++inItr;
	}

	std::fstream fOut;
	fOut.open("employee.txt", std::ios::out | std::ios::in);
	std::ostream_iterator<Employee> outItr(fOut);
	copy(empList.begin(), empList.end(), outItr);
	fOut.flush();
	fOut <<"EOF";

	std::istream_iterator<Employee> fItr(fOut);
	
	std::vector<Employee> eL;
	while (fItr != endItr)
	{
		eL.push_back(*fItr);
		fItr++;
	}

	std::ostream_iterator<Employee> oItr(std::cout);

	copy(eL.begin(), eL.end(), oItr);



}

