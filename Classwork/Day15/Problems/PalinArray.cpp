#include<iostream>
using namespace std;

#define MAX 10

bool checkPalinarray(int[], int);

int main()
{
	int arr[MAX], size;
	cout << "Enter size of the array: ";
	cin >> size;
	cout << "Enter the elements of the array: ";
	for (int i = 0; i < size; ++i)
		cin >> arr[i];
	cout << endl;
	if (checkPalinarray(arr, size))
		cout << "It is a palinarray" << endl;
	else
		cout << "It is not a palinarray" << endl;
	return 0;
}

bool checkPalinarray(int a[], int s)
{
	int r = s - 1, l = 0;
	while (r > l)
	{
		if (a[l] != a[r])
			return false;
		l++;
		r--;
	}
	return true;
}