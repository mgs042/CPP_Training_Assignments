#include<iostream>
using namespace std;

#define CAP 10

int main()
{
	int arr[CAP],k,i;
	bool flag = false;
	for (i = 0; i < CAP; ++i)
	{
		cout << "Enter the value of arr[" << i << "]: ";
		cin >> arr[i];
	}
	cout << endl;
	cout << "Values of the array: ";
	for (i = 0;i < CAP; ++i)
		cout << arr[i] << " ";
	cout << endl;
	cout << "Enter the element to be searched for: ";
	cin >> k;
	cout << endl;
	for (i = 0; i < CAP; ++i)
	{
		if (arr[i] == k)
		{
			flag = true;
			break;
		}
	}
	if (flag)
		cout << "Element " << k << " is found at index " << i << endl;
	else
		cout << "Element is not found" << endl;;
}