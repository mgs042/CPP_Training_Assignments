#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char line[] = "This is a CPP Programming Class";
	char ch = 'P';
	unsigned long int BA = 0, BA1 = 0, BA2 = 0;
	BA = (unsigned long int)line;
	char* res = strchr(line, ch);
	if (res != nullptr)
	{
		cout << res << endl;
		BA1 = (unsigned long int)res;
	}
	else
		cout << "Character not found !!!" << endl;
	cout << "BA of 'P': " << BA1 << endl;
	cout << "RA of 'P': " << BA1-BA << endl;
	char substr[] = "is";
	char* res1 = strstr(line, substr);
	if (res != nullptr)
	{
		cout << res1 << endl;
		BA2 = (unsigned long int)res1;
	}
	else
		cout << "Character not found !!!" << endl;
	cout << "BA of 'is': " << BA2 << endl;
	cout << "RA of 'is': " << BA2-BA << endl;

}