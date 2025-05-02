#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char line[] = "the sun is beautiful";
	unsigned long int ra1 = 0, ra2 = 0, ba = (unsigned long int)line;
	char* ptr1 = strstr(line, "are");
	char* ptr2 = strchr(line, 'i');
	if (ptr1 != nullptr)
	{
		ra1 = (unsigned long int)ptr1 - ba;
	}
	else
	{
		ra1 = -1;
	}
	if (ptr2 != nullptr)
	{
		ra2 = (unsigned long int)ptr2 - ba;
	}
	else
	{
		ra2 = -1;
	}
	cout << int(ra1) << " " << ra2 << endl;
	cout << "Sum=" << ra1 + ra2;
}