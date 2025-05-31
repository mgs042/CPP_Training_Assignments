#include<iostream>
using namespace std;

template<typename T>
class calculator
{
	T val1;
	T val2;
public:
	calculator(T v1, T v2) : val1(v1), val2(v2) {}
	void setVal1(T val1)
	{
		this->val1 = val1;
	}
	void setVal2(T val2)
	{
		this->val2 = val2;
	}
	T add()
	{
		return val1 + val2;
	}
	T subtract()
	{
		return val1 - val2;
	}
	T multiply()
	{
		return val1 * val2;
	}
	T divide()
	{
		return val1 / val2;
	}
};


int main()
{
	calculator<int> c(10, 20);
	calculator<float> d(2.3, 4.5);
	cout << c.add() << endl;
	cout << c.subtract() << endl;
	cout << c.multiply() << endl;
	cout << c.divide() << endl;

	cout << d.add() << endl;
	cout << d.subtract() << endl;
	cout << d.multiply() << endl;
	cout << d.divide() << endl;
	return 0;
}