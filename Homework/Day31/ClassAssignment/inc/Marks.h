#pragma once
#include<Student.h>
class Marks :public Student
{
private:
	float mark1, mark2, mark3;
	void calculate();
public:
	Marks(unsigned int, string, short unsigned int, float, float, float);
	void display();
};