#include<iostream>
using namespace std;

class A
{
	int a;
public:
	A(int x): a(x) { cout << "Constr A called" << endl; }
	~A() { cout << "Destr A called" << endl; }
	void dispA() { cout << "a = " << a << endl; }
};

class B
{
	int b;
public:
	B(int x): b(x) { cout << "Constr B called" << endl; }
	~B() { cout << "Destr B called" << endl; }
	void dispB() { cout << "b = " << b << endl; }
};

class C : public A, public B
{
	int c;
public:
	C(int x, int y, int z) :A(x), B(y), c(z) { cout << "Constr C called" << endl; }
	~C() { cout << "Destr C called" << endl; }
	void dispC() { cout << "c = " << c << endl; }
};

int main()
{
	C c(1, 2, 3);
	c.dispA();
	c.dispB();
	c.dispC();
	return 0;
}