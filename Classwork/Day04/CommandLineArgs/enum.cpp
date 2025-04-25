#include "stringHandling.h"
#include<iostream>
using namespace std;

void enumHandling()
{
	enum Day { Monday=3000, Tuesday, Wednesday = 1000, Thursday=5000, Friday, Saturday, Sunday };
	Day today = Friday;
	cout << "Value of today is: " << today << endl;
}