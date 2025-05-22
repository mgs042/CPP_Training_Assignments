#include<iostream>
#include<string>
#include<StudentGradebook.h>
using namespace std;

float StudentGradebook::calculateAverage()
{
	float sum = 0;
	for (int i = 0; i < 3; ++i)
		sum += marks[i];
	return sum / 3.0;
}

char StudentGradebook::getGrade(float avg)
{
	if (avg <= 100 && avg >= 75)
		return 'A';
	else if (avg < 75 && avg >= 50)
		return 'B';
	else if (avg < 50 && avg >= 0)
		return 'C';
	else
	{
		cout << "Invalid Mark" << endl;
		return '!';
	}
}

void StudentGradebook::displayGrade()
{
	float avg = calculateAverage();
	cout << "Roll No.:" << rollNo << endl;
	cout << "Name: " << name << endl;
	cout << "Average: " << avg << endl;
	cout << "Grade: " << getGrade(avg);
	cout << endl << endl;
}

void StudentGradebook::getStudentDetails()
{
	cout << "Enter Roll No. ";
	cin >> rollNo;
	cout << "Enter Name: ";
	cin.ignore();
	getline(cin, name);
	for (int i = 0; i < 3; ++i)
	{
		cout << "Enter mark of Subject " << i + 1 << ": ";
		cin >> marks[i];
	}
	cout << endl << endl;
}
