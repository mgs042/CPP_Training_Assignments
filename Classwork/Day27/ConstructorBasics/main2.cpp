#include<iostream>
using namespace std;

class T
{
private:
	static int val;
public:
	T()
	{
		val++;
	}
	void disp()
	{
		cout << "Value: " << val << endl;
	}
};

int T::val;

int main()
{
	T ob1;
	ob1.disp();
	T ob2;
	ob2.disp();
	T* t = new T[10];
	t[0].disp();
	
	return 0;
}