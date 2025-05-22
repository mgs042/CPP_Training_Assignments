#include<iostream>
using namespace std;

int main()
{
	static int* a = new int(20);
	delete(a);
	/**a = 101;
	cout << *a;*/
	return 0;
}