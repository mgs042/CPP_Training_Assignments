#include<iostream>
using namespace std;

class Base
{
public:
	virtual void display()
	{
		cout << "Base Class Function" << endl;
	}
	//virtual void pureVFunc() = 0;
};

class Derived: public Base
{
public:
	void display() override{
		cout << "Derived Class Function" << endl;
	}
	void displayDerived()
	{
		cout << "Only Derived Class Function" << endl;
	}
	/*void pureVFunc() override
	{
		cout << "Pure Virtual Function" << endl;
	}*/
};

int main()
{

	Derived d;
	Base* bptr = &d;
	bptr->display();
	//bptr->pureVFunc();
	Base b;
	Base* bptr2 = &b;
	cout << bptr2 << endl;
	Derived* dptr = dynamic_cast<Derived*>(bptr2);
	cout << dptr << endl;
	//bptr->displayDerived();
	return 0;

}