#include<iostream>
#include<list>
#include<iterator>
using namespace std;

class Student
{
	int id;
	string name;
public:
	Student() :id(0), name("") {}
	Student(int i, string s): id(i), name(s){}
	void setId(int id) { this->id = id; }
	void setName(string name) { this->name = name; }
	int getId() { return this->id; }
	string getName() { return this->name; }
	void display() { cout << "ID: " << id << "\t" << "Name: " << name << endl; }
	bool operator<(const Student& other) { return this->name.compare(other.name) < 0; }
};

void sortStudent(list<Student>& l)
{
	Student t;
	for (auto i=l.begin(); i !=l.end(); advance(i,1))
	{
		cout << i->getName() << endl;
		for (auto j=l.begin(); j != l.end(); advance(j,1))
		{
			if (*i < *j)
			{
				t = *i;
				*i = *j;
				*j = t;
			}
		}
		for (auto i : l)
			i.display();
		cout << endl << endl;
	}
	
}

int main()
{
	list<Student> listStud;
	Student s1(1, "abc");
	listStud.push_back(s1);
	s1.setId(2);
	s1.setName("qwe");
	listStud.push_back(s1);
	s1.setId(3);
	s1.setName("cvnm");
	listStud.push_back(s1);
	s1.setId(4);
	s1.setName("zcx");
	listStud.push_back(s1);
	s1.setId(5);
	s1.setName("aaaa");
	listStud.push_back(s1);
	for (auto i : listStud)
		i.display();
	cout << endl;
	sortStudent(listStud);
	for (auto i : listStud)
		i.display();
	cout << endl;
}