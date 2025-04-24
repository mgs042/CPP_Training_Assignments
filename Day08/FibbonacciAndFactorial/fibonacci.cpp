#include<fibonacci.h>
#include<iostream>
using namespace std;

void fibonacci(int n)
{
	int a = 0, b = 1, sum = 0;
	if (n < 1)
	{
		cout << "Invalid Input"<<endl;
		return;
	}
	else if (n == 1)
	{
		cout << a << endl;
		return;
	}
	else {
		cout << a << ", " << b;
		for (int i = 3; i <= n; i++)
		{
			sum = a + b;
			cout << ", " << sum;
			a = b;
			b = sum;
		}
		cout << endl;
	}

}