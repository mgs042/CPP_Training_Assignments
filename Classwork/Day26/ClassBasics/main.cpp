#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
	int rollno;
	string name;
	string dept;
	string batch;
public:
	void display()
	{
		cout << "Roll No: " << rollno << endl;
		cout << "Name: " << name << endl;
		cout << "Department: " << dept << endl;
		cout << "Batch: " << batch << endl;
	}
	void setRollNo(int r)
	{
		rollno = r;
	}
	int getRollNo()
	{
		return rollno;
	}
	void setName(string s)
	{
		name = s;
	}
	string getName()
	{
		return name;
	}
	void setDept(string d)
	{
		dept = d;
	}
	string getDept()
	{
		return dept;
	}
	void setBatch(string b)
	{
		batch = b;
	}
	string getBatch()
	{
		return batch;
	}

};


int  main()
{
	Student s;
	s.setRollNo(12);
	s.setName("Gouri");
	s.setDept("IT");
	s.setBatch("2020-24");
	cout << s.getRollNo() << endl;
	cout << s.getName() << endl;
	cout << s.getDept() << endl;
	cout << s.getBatch() << endl;
	cout << endl;
	s.display();
	return 0;
}