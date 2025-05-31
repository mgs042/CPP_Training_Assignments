#include<iostream>
using namespace std;

class A
{
	int a;
public:
	A()
	{
		cout << "Default Contructor Called" << endl;
		a = 10;
	}
	A(int x, char t) :a(x)
	{
		cout << "Constructor of A called by " << t << endl;
	}
	void getA()
	{
		cout << "A::a = " << a << endl;
	}
};

class B : virtual public A
{
public:
	B(int x, char t) : A(x, 'B')
	{
		cout << "Constructor of B called by " << t << endl;
	}
};

class C : virtual public A
{
public:
	C(int x, char t) : A(x, 'C')
	{
		cout << "Constructor of C called by " << t << endl;
	}
};

class D : public B, public C
{
public:
	D(int x, int y, char t) : A(x, 'D'), B(x, 'D'), C(y, 'D')
	{
		cout << "Constructor of D called by " << t << endl;
	}
};

int main()
{
	D d(2,3,'U');
	//d.getA(); //Error because D::getA is ambigious
	/*d.B::getA();
	d.C::getA();*/
	d.getA();
}