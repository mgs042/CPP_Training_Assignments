#include<iostream>
using namespace std;

int add(int, int, int);
float add(float, float);
string add(string, string);

int main()
{
	cout << add(float(3.2), float(2.3)) << endl;
	cout << add("Hello", "World") << endl;
	cout << add(1, 2, 3) << endl;
	return 0;
}


int add(int a, int b, int c)
{
	return a + b + c;
}

float add(float a, float b)
{
	return a + b;
}

string add(string a, string b)
{
	return a + b;
}