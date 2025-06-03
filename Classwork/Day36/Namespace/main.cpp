#include<iostream>
using namespace std;

#define PI 3.14

namespace Circle
{
	double area(double x)
	{
		return PI * x * x;
	}
}

namespace Square
{
	double area(double x)
	{
		return x * x;
	}
}

double area(double x)
{
	return x;
}

int main()
{
	using namespace Circle;
	cout << "Area: " << Circle::area(10) << endl;
	cout << "Area: " << ::area(10) << endl;
}