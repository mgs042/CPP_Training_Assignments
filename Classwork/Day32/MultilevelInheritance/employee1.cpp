#include<iostream>
using namespace std;

class Person
{
protected:
	string name;
	char gender;
	int age;
	long int phoneNo;
	Person(string n, char g, int a, long int p) :name(n), gender(g), age(a), phoneNo(p) {}
	void dispPerson()
	{
		cout << "Name: " << name << endl;
		cout << "Gender: " << gender << endl;
		cout << "Age: " << age << endl;
		cout << "Phone No.: " << phoneNo << endl;
	}
	
};

class Employee: private Person
{
private:
	string empDepartment;
protected:
	int empId;
	int empSalary;
public:
	Employee(string n, char g, int a, long int p, int id, int s, string d) : Person(n,g,a,p), empId(id), empSalary(s), empDepartment(d) {}
	void dispEmp()
	{
		dispPerson();
		cout << "ID: " << empId << endl;
		cout << "Salary: " << empSalary << endl;
		cout << "Department: " << empDepartment << endl;
	}
};
class LMS;
class EmpFin: private Employee
{
private:
	int empPt;
	int empPf;
	int empVp;
	int empDays;
public:
	EmpFin(string n, char g, int a, long int p, int id, int s, string d, int pt, int pf, int vp, int days) : Employee(n,g,a,p,id,s,d), empPt(pt), empPf(pf), empVp(vp), empDays(days) {}
	void dispEmpFin()
	{
		dispEmp();
		cout << "P Tax: " << empPt << endl;
		cout << "PF: " << empPf << endl;
		cout << "Variable Pay: " << empVp << endl;
		cout << "No. of Days: " << empDays << endl;
		int grossSalary = (empSalary - empPt - empPf + empVp) / 30;
		grossSalary *= empDays;
		cout << "Gross Salary: " << grossSalary << endl;
	}
	friend void setEmpDays(EmpFin&, LMS&);
};

class LMS :public Employee
{
private:
	int hours;
	int days;
public:
	LMS(string n, char g, int a, long int p, int id, int s, string d, int h, int ds):Employee(n, g, a, p, id, s, d), hours(h), days(ds) {}
	void displayLMS()
	{
		cout << "Hours: " << hours << endl;
		cout << "Days: " << days << endl;
	}
	friend void setEmpDays(EmpFin&, LMS&);
};

void setEmpDays(EmpFin& obj1, LMS& obj2)
{
	obj1.empDays = obj2.days;
}

int main()
{
	EmpFin e("Gouri",'M',23,623562,293955,25000,"Applied Materials", 300, 4000, 500, 20);
	LMS l("Gouri",'M',23,623562,293955,25000,"Applied Materials", 8, 22);
	setEmpDays(e, l);
	e.dispEmpFin();
	l.displayLMS();
	return 0;
}