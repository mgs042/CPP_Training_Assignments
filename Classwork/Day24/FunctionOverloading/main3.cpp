#include<iostream>
using namespace std;


void printReferenceValue(int&);
void printReferenceValue(int&&);



int main()
{
	int a = 10;
	printReferenceValue(a);
	printReferenceValue(20);
	string && s = "Hello";
	cout << &s << endl;
	cout << s;
	return 0;
}

void printReferenceValue(int& x)
{
	cout << x << endl;

}

void printReferenceValue(int&& x)
{
	cout << x << endl;
}
