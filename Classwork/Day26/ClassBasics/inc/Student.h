#pragma once
#include<iostream>
#include<string>
using namespace std;
class Student
{
	long int rollno;
	int sem;
	string studentName;
	string studentBatch;
	string studentDepartment;
	float marks[5];
	float calculateAvg()
	{
		float sum = 0.0;
		for (int i = 0; i < 5; ++i)
			sum += marks[i];
		return sum / 5;
	}
public:
	void setStudentName(string);
	void setStudentDepartment(string);
	void setStudentBatch(string);
	void setMarks(float* m);

	void setDetails();
	long int getRollNo();
	int getSem();
	string getStudentName();
	string getStudentDepartment();
	string getStudentBatch();
	void getMarks();
	float getAverage();
};

void Student::setStudentName(string name)
{
	studentName = name;
}
void Student::setStudentDepartment(string department)
{
	studentDepartment = department;
}
void Student::setStudentBatch(string batch)
{
	studentBatch = batch;
}
void Student::setMarks(float* m)
{
	for (int i = 0;i < 5; ++i)
	{
		marks[i] = m[i];
	}
}

void Student::setDetails()
{
	static long int r = 1;
	rollno = r++;
	cout << "Enter the Student Name: ";
	cin >> studentName;
	cout << "Enter the Student Batch: ";
	cin >> studentBatch;
	cout << "Enter the Student Department: ";
	cin >> studentDepartment;
	cout << "Enter the current semester: ";
	cin >> sem;
	for (int i = 0; i < 5; ++i)
	{
		cout << "Enter the mark of Subject " << i + 1 << ": ";
		cin >> marks[i];
	}
}
long int Student::getRollNo()
{
	return rollno;
}
int Student::getSem()
{
	return sem;
}
string Student::getStudentName()
{
	return studentName;
}
string Student::getStudentDepartment()
{
	return studentDepartment;
}
string Student::getStudentBatch()
{
	return studentBatch;
}
void Student::getMarks()
{
	for (int i = 0; i < 5; ++i)
		cout << marks[i] << " ";
}
float Student::getAverage()
{
	return calculateAvg();
}