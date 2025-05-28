#include<iostream>
using namespace std;

class A
{
protected:
	int a;
	void dispAPrt() { cout << "A: Method of protected" << endl; }
public:
	A() { a = 10; }
	void dispA() { cout << "A: a = " << a << endl; }
};

class B : public A
{
public:
	void dispB()
	{
		a = 20;
		dispAPrt();
		dispA();
	}
};

class C :private B
{
public:
	void dispC()
	{
		dispB();
	}
};

int main()
{
	/*B obj;
	obj.dispB();
	obj.dispA();*/
	C objC;
	objC.dispC();
	return 0;
}