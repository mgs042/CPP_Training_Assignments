#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class Student
{
private:
	int id;
	char name[20];
public:
	Student() { id = 0; strcpy_s(name, ""); }
	Student(int id, const char* name) { this->id = id; strcpy_s(this->name, name); }
	void display()
	{
		cout << "ID: " << this->id << endl;
		cout << "Name: " << this->name << endl;
	}
};

int main()
{
	fstream fIO;
	//struct Employee e = { 101,"Amit" };
	Student s(111, "Gouri");

	fIO.open("Test1.txt", ios::in | ios::out | ios::binary);

	if (!fIO.is_open())
	{
		cerr << "Error: opening the file" << endl;
	}

	//fIO.write((char*)&e, sizeof(e));
	fIO.write((char*)&s, sizeof(s));
	fIO.close();
	fIO.open("Test1.txt", ios::in | ios::out | ios::binary);

	if (!fIO.is_open())
	{
		cerr << "Error: opening the file" << endl;
	}
	//struct Employee e1;
	Student s1;
	fIO.read((char*)&s1, sizeof(s1));
	//cout << e1.id << "\t" << e1.name << endl;
	s1.display();
	fIO.close();

	return 0;

}