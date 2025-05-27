#include<iostream>
using namespace std;

class A
{
private:
	int x;
protected:
	int y;
	void protectedMethodOfA()
	{
		cout << "Protected Method of A called" << endl;
	}
public:
	A()
	{
		cout << "Constructor of A called" << endl;
		x = 10;
		y = 20;
	}
	void dispA()
	{
		cout << "\tDisplay of class A" << endl;
		cout << "x = " << x << " y = " << y << endl;
	}
};

class B : public A
{
private:
	int a;
protected:
	int b;
public:
	B()
	{
		cout << "Constructor of B called" << endl;
		a = 11;
		b = 12;
	}
	void dispB()
	{
		cout << "\tDisplay of class B" << endl;
		cout << "a = " << a << " b = " << b << endl;
	}
	void protectedMethod()
	{
		protectedMethodOfA();
	}
};

int main()
{
	A obj1;
	B obj2;
	obj1.dispA();
	obj2.dispB();
	obj2.dispA();
	obj2.protectedMethod();
	return 0;
}