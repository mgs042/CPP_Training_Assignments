#include<iostream>
using namespace std;

class Student
{
protected:
	int rollNo;
	string name;
	string address;
	string batch;
public:
	Student(int r, string n, string a, string b) :rollNo(r), name(n), address(a), batch(b) {}
	virtual void displayStudent() = 0;
};

class Sports :public Student
{
	string event;
	int medalCount;
public:
	Sports(int r, string n, string a, string b, string e, int mc):Student(r,n,a,b), event(e), medalCount(mc){}
	void displayStudent()
	{
		cout << endl << "++++++++++++++++++++++++++++++" << endl;
		cout << "Roll No: " << rollNo << endl;
		cout << "Name: " << name << endl;
		cout << "Address: " << address << endl;
		cout << "Batch: " << batch << endl;
		cout << "----------------------------" << endl;
		cout << "Event: " << event << endl;
		cout << "Medal Count: " << medalCount << endl;
	}

};

class Academics : public Student
{
	float marks[3];
public:
	Academics(int r, string n, string a, string b, float m[3]) :Student(r, n, a, b)
	{
		for (int i = 0; i < 3; ++i)
			this->marks[i] = m[i];
	}
	void displayStudent()
	{
		cout << endl << "++++++++++++++++++++++++++++++" << endl;
		cout << "Roll No: " << rollNo << endl;
		cout << "Name: " << name << endl;
		cout << "Address: " << address << endl;
		cout << "Batch: " << batch << endl;
		cout << "----------------------------" << endl;
		cout << "Marks: ";
		for (int i = 0; i < 3; ++i)
			cout << marks[i] << " ";
		cout << endl;
	}
};

class Library : public Student
{
	int borrowedBookId;
	string dueDate;
	string bookName;
public:
	Library(int r, string n, string a, string b, int bId, string dd, string bn) :Student(r, n, a, b), borrowedBookId(bId), dueDate(dd), bookName(bn){}
	void displayStudent()
	{
		cout << endl << "++++++++++++++++++++++++++++++" << endl;
		cout << "Roll No: " << rollNo << endl;
		cout << "Name: " << name << endl;
		cout << "Address: " << address << endl;
		cout << "Batch: " << batch << endl;
		cout << "----------------------------" << endl;
		cout << "Borrowed Book ID: " << borrowedBookId << endl;
		cout << "Borrowed Book Name: " << bookName << endl;
		cout << "Due Date: " << dueDate << endl;
		cout << endl;
	}
};

int main()
{
	Sports s(101, "Gouri", "Tirur", "12-A", "Cricket", 3);
	float m[] = { 92, 87, 95 };
	Academics a(101, "Gouri", "Tirur", "12-A", m);
	Library l(101, "Gouri", "Tirur", "12-A", 24, "01-06-25", "Da Vinci Code");
	Student* student = &s;
	student->displayStudent();
	student = &a;
	student->displayStudent();
	student = &l;
	student->displayStudent();
	return 0;
}