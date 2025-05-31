#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>arr;
	int num=0;
	int count = 0;
	cout << "Enter the array elements: " << endl;
	while (num!=-1)
	{
		cin >> num;
		arr.push_back(num);
		count++;
	}
	cout << "Array size: " << arr.size() << endl;
	cout << "Array capacity: " << arr.capacity() << endl;
	cout << "Array Elements: ";
	for (auto i : arr)
	{
		cout << i << " ";
	}
}