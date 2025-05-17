#include<iostream>
using namespace std;


// BA+(i*NoOfCol*sizeof(int))+(j*sizeof(int))

int main()
{
	int a[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			cout << "Address: " << (unsigned long int) & a[i][j] << " Value: " << a[i][j]  << endl;
		}
		cout << endl;
	}
	cout << endl << endl;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			cout << "Address: " << (unsigned long int)a+(i*4*sizeof(int))+(j*sizeof(int)) << " Value: " << a[i][j] << endl;
		}
		cout << endl;
	}
	cout << endl << endl;
	int* ptr = nullptr;
	ptr = &a[0][0];
	for (int i = 0; i < 12; i++)
	{
		cout << *ptr << endl;
		ptr++;
	}
	cout << endl << endl;
	ptr = a[1
	];
	cout << *ptr;
	//int* ptr1 = a;
	return 0;
}


