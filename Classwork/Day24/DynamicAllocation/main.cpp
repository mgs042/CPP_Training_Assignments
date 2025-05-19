#include<iostream>
using namespace std;

int main()
{
	int* p = new int(10);
	cout << *p << endl;
	cout << sizeof(*p) << endl;
	int* p1 = new int[10];
	for (int i = 0; i < 10; ++i)
	{
		p1[i] = i + 1;
	}
	
	for (int i = 0; i < 10; ++i)
	{
		cout << *(p1 + i) << endl;
	}
	return 0;
}