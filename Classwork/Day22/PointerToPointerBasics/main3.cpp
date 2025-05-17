#include<iostream>
using namespace std;

int* func(int a)
{
	int sum = 0;
	sum += a;
	cout << "Address: " << (unsigned long int) & sum<< " Value: " << sum << endl;
	return &sum;
}

int main()
{
	int* ptr = func(100);
	cout << "Address: " << (unsigned long int) ptr << " Value: " << *ptr << endl;
	*ptr = 200;
	func(100);
	cout << "Address: " << (unsigned long int) ptr << " Value: " << *ptr << endl;
	return 0;
}