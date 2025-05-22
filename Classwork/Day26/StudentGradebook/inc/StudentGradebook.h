#pragma once
#include<string>
using namespace std;
class StudentGradebook
{
	int rollNo;
	string name;
	float marks[3];
	float calculateAverage();
	char getGrade(float);
public:
	void getStudentDetails();
	void displayGrade();
};