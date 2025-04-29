#include<iostream>
using namespace std;

int countOddElements(int*, int);

int main()
{
	int a[] = { 11,13,12,15,8,6,4,3,7,1 };
	constexpr int size = sizeof(a) / sizeof(int);
	int outputArray[size];
	int countOdd = 0, countEven = 0;
	for (int i = 0; i < size; ++i)
	{
		if (a[i] % 2 != 0)
			countEven++;
	}
	for (int i = 0; i < size; ++i)
	{
		if (a[i] % 2 == 0)
		{
			outputArray[countEven] = a[i];
			countEven++;
		}
		else
		{
			outputArray[countOdd] = a[i];
			countOdd++;
		}
	}
	for (int i = 0; i < size; ++i)
		cout << outputArray[i] << " ";
	return 0;
}

//int countOddElements(int* p, int size)
//{
//	int count = 0;
//	for (int i = 0; i < size; ++i)
//	{
//		if (p[i] % 2 != 0)
//			count++;
//	}
//	return count;
//}