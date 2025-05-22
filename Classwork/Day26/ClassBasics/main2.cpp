#include<iostream>
using namespace std;

#include<Student.h>

int main()
{
	float m[] = { 24.5, 33, 56, 78.99, 68.45 };
	Student s;
	s.setDetails();
	cout << endl << endl;
	cout << "Roll No. " << s.getRollNo() << endl;
	cout << "Name: " << s.getStudentName() << endl;
	cout << "Department: " << s.getStudentDepartment() << endl;
	cout << "Batch: " << s.getStudentBatch() << endl;
	cout << "Semester: " << s.getSem() << endl;
	cout << "Marks: ";
	s.getMarks();
	cout << endl;
	cout << "Average: " << s.getAverage() << endl;
	s.setStudentName("Hello");
	s.setStudentDepartment("Mech");
	s.setStudentBatch("2023-27");
	s.setMarks(m);
	cout << endl << endl;
	cout << "Roll No. " << s.getRollNo() << endl;
	cout << "Name: " << s.getStudentName() << endl;
	cout << "Department: " << s.getStudentDepartment() << endl;
	cout << "Batch: " << s.getStudentBatch() << endl;
	cout << "Semester: " << s.getSem() << endl;
	cout << "Marks: ";
	s.getMarks();
	cout << endl;
	cout << "Average: " << s.getAverage() << endl;
	return 0;
}
