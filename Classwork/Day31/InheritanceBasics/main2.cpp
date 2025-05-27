#include<iostream>
using namespace std;

class Numbers
{
protected:
	int num1, num2;
public:
	void setNums(int num1, int num2)
	{
		this->num1 = num1;
		this->num2 = num2;
	}
};

class Multiplier : public Numbers
{
private:
	int prod;
public:
	void setValues()
	{
		cout << "Enter the nums: ";
		cin >> num1 >> num2;
	}
	int multiply()
	{
		prod = num1 * num2;
		return prod;
	}
};

int main()
{
	Multiplier m;
	m.setValues();
	cout<<m.multiply();
	return 0;
}