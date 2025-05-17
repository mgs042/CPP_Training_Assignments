#include<iostream>
using namespace std;

void displayName(const char*);

int main()
{
	char name[] = "M Gouri Sankar";
	displayName(name);
	displayName("MGS042");
	return 0;
}

void displayName(const char* str)
{
	while (*str)
		cout << *str++;
	cout << endl;
}