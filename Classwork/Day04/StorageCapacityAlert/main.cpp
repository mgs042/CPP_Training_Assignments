#include<iostream>
using namespace std;

#define MAXCAPACITY 100

int main()
{
	int usedCapacity, availableCapacity;
	cout << "Enter the usedCapacity: ";
	cin >> usedCapacity;
	availableCapacity = MAXCAPACITY - usedCapacity;
	if (availableCapacity <= 0)
	{
		cout << "\n\tStorage is full\n"<<endl;
		exit(0);
	}
	cout << "\nYou can store things in the storage\n"<<endl;
}