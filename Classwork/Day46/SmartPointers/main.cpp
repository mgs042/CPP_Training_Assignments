#include<iostream>

template<class T>
class SmartPtr
{
	T* ptr;
public:
	SmartPtr() :ptr(nullptr) {}
	SmartPtr(T *p=nullptr): ptr(p){}
	~SmartPtr() { delete ptr; }
	T& operator*() { return *ptr; }
	//void operator*(T val) { *ptr = val; }
};

int main()
{
	SmartPtr<char> p(new char());
	*p = 'a';
	std::cout << *p << std::endl;
}