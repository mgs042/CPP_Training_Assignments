#include<iostream>
using namespace std;

template <class T>
void swapNum(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10, b = 20;
	cout << "Before Swap: a = " << a << "\tb = " << b << endl;
	swapNum(a, b);
	cout << "After Swap: a = " << a << "\tb = " << b << endl;
	float x = 2.5, y = 5.1;
	cout << "===================================================" << endl;
	cout << "Before Swap: x = " << x << "\ty = " << y << endl;
	swapNum(x, y);
	cout << "After Swap: x = " << x << "\ty = " << y << endl;
	char m = 'a', n = 'b';
	cout << "===================================================" << endl;
	cout << "Before Swap: m = " << m << "\tn = " << n << endl;
	swapNum(m, n);
	cout << "After Swap: m = " << m << "\tn = " << n << endl;
	return 0;
}