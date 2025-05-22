#include<iostream>
using namespace std;

class M;

class T
{
private:
		int val;
public:
	T(int v)
	{
		val = v;
	}
	void disp()
	{
		cout << val << endl;
	}
	friend void fun1(T&, M&);
};

class M
{
private:
	int val;
public:
	M(int v)
	{
		val = v;
	}
	void disp()
	{
		cout << val << endl;
	}
	friend void fun1(T&, M&);
};

void fun1(T& t, M& m)
{
	t.val = 100;
	m.val = 200;
}

int main()
{
	T t(10);
	t.disp();
	M m(20);
	m.disp();
	fun1(t, m);
	t.disp();
	m.disp();
	return 0;
}