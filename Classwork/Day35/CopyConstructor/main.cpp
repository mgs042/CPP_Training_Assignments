#include<iostream>
using namespace std;

class A
{
private:
	int* ptr;
public:
	A()
	{
		ptr = new int();
		*ptr = 10;
	}
	A(int v)
	{
		ptr = new int();
		*ptr = v;
	}
	A(const A& ob)
	{
		int* temp = new int(*(ob.ptr));
		this->ptr = temp;
	}
	void display()
	{
		cout << "Ptr: " << ptr << endl;
		cout << "Value: " << *ptr << endl;
		cout << endl;
	}
	int getVal()
	{
		return *ptr;
	}
	A operator+(const A& ob)
	{
		return A(*(ob.ptr)+*(this->ptr));

	}
	A& operator++()
	{
		(*ptr)++;
		return *this;
	}
	A operator++(int)
	{
		A temp(*this);
		++(*this);
		return temp;
	}
};

int main()
{
	A obj1;
	obj1.display();
	A obj2 = obj1;
	obj2.display();
	A obj3 = obj1 + obj2;
	obj3.display();
	obj3++;
	obj3.display();
	++obj3;
	obj3.display();
	return 0;
}