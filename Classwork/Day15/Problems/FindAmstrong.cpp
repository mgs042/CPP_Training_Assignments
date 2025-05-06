#include<iostream>
#include<math.h>
using namespace std;

bool checkAmstrong(int, int);
int numberLength(int);

int main()
{
	int n;
	cout << "Enter the value of N: ";
	cin >> n;
	cout << endl;
	for (int i = 1; i <= n; ++i)
	{
		if (checkAmstrong(i, numberLength(i)))
			cout << i << " ";
	}
	return 0;
}

int numberLength(int num)
{
	int count=0;
	while (num > 0)
	{
		count++;
		num /= 10;
	}
	return count;
}

bool checkAmstrong(int num, int p)
{
	int temp = num, sum = 0;
	while (temp > 0)
	{
		sum = sum + pow((temp % 10),p);
		temp /= 10;
	}
	return sum==num;
}