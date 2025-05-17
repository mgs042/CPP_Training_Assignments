#include<iostream>
using namespace std;

int main()
{
	int* ptr = (int*)malloc(sizeof(int) * 3);
	for (int i = 0; i < 3; ++i)
		cin >> *(ptr + i);
	cout << ptr << endl;
	cout << endl;
	for (int i = 0; i < 3; ++i)
		cout << *(ptr + i) << endl;
	free(ptr);
	cout << *ptr;
	cout << endl;
	cin >> *ptr;
	cout << *ptr<<ptr<<endl;
	return 0;
}