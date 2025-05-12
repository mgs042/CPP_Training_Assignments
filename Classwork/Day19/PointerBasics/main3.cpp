#include<iostream>
using namespace std;

int main()
{
	int a[3] = { 10,20,30 };
	int* ptr = a;
	cout << *ptr++ << endl;
	cout << * ++ ptr << endl; //++ptr increments ptr and then gets the value
	cout << *ptr++ << endl;
	ptr = a; //reassign to the BA
	cout << *ptr * *ptr << endl;

	cout << sizeof(ptr) << " " << sizeof(void*) << endl;
	return 0;
}