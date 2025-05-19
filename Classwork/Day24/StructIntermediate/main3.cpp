#include<iostream>
#include<cstdlib>
using namespace std;

typedef struct employee
{
	int id;
	struct address
	{
		int hNo;
	}addr;
}EMP;

int main()
{
	EMP e;
	e.id = 10;
	e.addr.hNo = 4;
	cout << e.id << endl;
	cout << e.addr.hNo << endl;
	EMP* e1 = (EMP*)malloc(sizeof(EMP) * 3);
	for (int i = 0; i < 3; ++i)
	{
		cin>>(e1 + i)->id;
		cin>> (e1 + i)->addr.hNo;
	}
	for (int i = 0; i < 3; ++i)
	{
		cout << (e1+i)->id << "\t" << (e1+i)->addr.hNo << endl;
	}
	
	return 0;
}