#include<iostream>
using namespace std;

void swap(int&, int&);

int main(int argc, char *argv[])
{
	int a, b;
	//cin >> a >> b;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	swap(a, b);
	cout << a << " " << b;
	return 0;
}

void swap(int& x, int& y)
{
	x = x + y;
	y = x - y;
	x = x - y;
}