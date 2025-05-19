#include<iostream>
using namespace std;

int add(int a, int b = 20, int c = 30);

int main()
{
	cout << add(5, 4) << endl;
	cout << add(1, 2, 3) << endl;
	cout << add(2) << endl;
	return 0;
}


int add(int a, int b, int c)
{
	return a + b + c;
}
