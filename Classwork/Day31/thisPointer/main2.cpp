#include<iostream>
using namespace std;

class Test
{
	int x;
	int y;
public:
	Test(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	Test& setX(int x)
	{
		this->x = x;
		return *this;
	}
	Test& setY(int y)
	{
		this->y = y;
		return *this;
	}
	int getX()
	{
		return this->x;
	}
	int getY()
	{
		return this->y;
	}
};

int main()
{
	Test ob(5,6);
	ob.setX(100).setY(200);
	cout << "x = " << ob.getX() << endl;
	cout << "y = " << ob.getY() << endl;
	Test ob2(1, 2);
	Test& ob3 = ob2.setX(10);
	cout << "x = " << ob3.getX() << endl;
	return 0;
}