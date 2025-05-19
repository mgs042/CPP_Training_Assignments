#include<iostream>
using namespace std;

typedef struct employee
{
	int id;
	char name[20];
}EMP;

int main()
{
	EMP* e = new EMP[10];
	EMP* e1 = new EMP{ 101, "Gouri" };
	cout << e1->id << "\t" << e1->name;
	delete e1;
	delete[] e;
	return 0;
}