#include<iostream>
#include<string>
#include<Luggage.h>
using namespace std;

int main()
{
	Luggage l1("Rita", 18);
	l1.checkOverweight();
	Luggage l2("Sam", 25);
	l2.checkOverweight();
	return 0;
}