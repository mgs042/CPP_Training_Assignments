#include<iostream>
#include<string>
#include<Student.h>
#include<Marks.h>

Marks::Marks(unsigned int rollNo, string name, short unsigned int age, float mark1, float mark2, float mark3) :Student(rollNo, name, age)
{
	this->mark1 = mark1;
	this->mark2 = mark2;
	this->mark3 = mark3;
}

void Marks::calculate()
{
	float total = this->mark1 + this->mark2 + this->mark3;
	cout << "Total Marks: " << total << endl;
	cout << "Average Marks: " << total / float(3) << endl;
}

void Marks::display()
{
	Student::display();
	cout << "Full Result: " << endl;
	this->calculate();
}