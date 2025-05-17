#include<iostream>
using namespace std;

typedef struct employee
{
	int empID;
	string empName;
}EMP;

typedef struct period
{
	int empID;
	int periodDays;
}PER;

typedef struct salaryDetails
{
	int empID;
	float salaryBP;
	float salaryVP;
	float salaryAllowance;
}SAL;


int getEmployeeDetails(EMP *);
void getSalaryDetails(SAL *, int);
void getPeriodDetails(PER *, int);
float grossSalaryCalc(SAL, PER);
float taxDeduction(float);

int main()
{
	EMP e[2];
	SAL s[2];
	PER p[2];
	int id = 0;
	float gross, tax;
	for (int i = 0; i < 2; ++i)
	{
		id = getEmployeeDetails(&e[i]);
		getSalaryDetails(&s[i], id);
		getPeriodDetails(&p[i], id);
	}
	cout << endl;
	cout <<"EmployeeID\t" << e[i].empName << "\t" << s[i].salaryBP << "\t" << s[i].salaryVP << "\t" << s[i].salaryAllowance << "\t" << p[i].periodDays << "\t" << gross << "\t" << tax << "\t" << gross - tax << endl;
	for (int i = 0; i < 2; ++i)
	{
		gross = grossSalaryCalc(s[i], p[i]);
		tax = taxDeduction(gross);
		cout << e[i].empID << "\t" << e[i].empName << "\t" << s[i].salaryBP << "\t" << s[i].salaryVP << "\t" << s[i].salaryAllowance << "\t" << p[i].periodDays << "\t" << gross << "\t" << tax << "\t" << gross - tax << endl;
	}
}


int getEmployeeDetails(EMP* e)
{
	cout << endl;
	static int id = 1;
	e->empID=id++;
	cout << "Enter Employee Name: ";
	cin >> e->empName;
	return id;
}

void getSalaryDetails(SAL* s, int id)
{
	cout << endl;
	s->empID = id;
	cout << "Enter Basic Pay: ";
	cin >> s->salaryBP;
	cout << "Enter Variable Pay: ";
	cin >> s->salaryVP;
	cout << "Enter Allowance: ";
	cin >> s->salaryAllowance;
}

void getPeriodDetails(PER* p, int id)
{
	cout << endl;
	p->empID = id;
	cout << "Enter number of days: ";
	cin >> p->periodDays;
}

float grossSalaryCalc(SAL s, PER p)
{
	return (s.salaryBP * p.periodDays) + s.salaryVP + s.salaryAllowance;
}

float taxDeduction(float grossSalary)
{
	return grossSalary*0.4;
}