#include<iostream>
using namespace std;

template<typename T>
class Box
{
	T val;
public:
	Box(T v) :val(v) {}
	void show()
	{
		cout << "Value in Box is " << val << " of type " << typeid(val).name() << endl;
	}
};

int main()
{
	Box<int> intBox(10);
	intBox.show();
	Box<string> stringBox("Hello World");
	stringBox.show();
	Box<float> floatBox(4.5);
	floatBox.show();
	return 0;
}