#include<iostream>
using namespace std;

class Data
{
public:
	int a;
	string b;
	void print()
	{
		cout << "a = " << a << endl;
	}
	void printString()
	{
		cout << "b = " << b << endl;
	}
};

int main()
{
	int Data::*ptr = &Data::a;
	Data ob1, * ob2;
	ob2 = &ob1;
	ob1.*ptr = 20;
	ob1.print();
	ob2->*ptr = 30;
	ob2->print();
	string Data::* ptr2 = &Data::b;
	ob1.*ptr2 = "Hello world";
	ob2->printString();
	return 0;
}