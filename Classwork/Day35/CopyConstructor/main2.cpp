#include<iostream>
using namespace std;

class ComplexNumber
{
private:
	int real;
	int imag;
public:
	ComplexNumber(int r, int i) :real(r), imag(i) {}
	ComplexNumber operator+(const ComplexNumber& ob)
	{
		ComplexNumber result(this->real + ob.real, this->imag + ob.imag);
		return result;
	}
	ComplexNumber operator-(const ComplexNumber& ob)
	{
		ComplexNumber result(this->real - ob.real, this->imag - ob.imag);
		return result;
	}
	void operator()()
	{
		cout << "Real Part: " << real << endl;
		cout << "Complex Part: " << imag << endl;
	}
	friend ostream& operator<<(ostream& os, const ComplexNumber& ob)
	{
		os << ob.real << " + " << ob.imag << "i" << endl;
		return os;
	}

};

int main()
{
	ComplexNumber ob1(4, 5), ob2(2, 3);
	cout << "Addition: " << ob1 + ob2 << endl;
	cout << "Subtraction: " << ob1 - ob2 << endl;
	ob1();
	ob2();
	return 0;
}