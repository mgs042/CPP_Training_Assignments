#include<iostream>
using namespace std;

int func(int);
int main()
{
	int ret = 0;
	ret = func(5);
	cout << "Return Value is: " << ret;
	return 0;
}

int func(int v)
{
	
	if (v <= 0)
		return 1;
	v--;
	func(v);
	cout << "Value of v: " << v << endl;
}