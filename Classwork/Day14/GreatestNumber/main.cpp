#include<iostream>
using namespace std;

int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	if (a > b)
	{
		if (a > c)
		{
			if (a > d)
			{
				if (a > e)
				{
					cout << a << " is the greatest" << endl;
				}
				else
				{
					cout << e << " is the greatest" << endl;
				}
			}
			else
			{
				if (d > e)
				{
					cout << d << " is the greatest" << endl;
				}
				else
				{
					cout << e << " is the greatest" << endl;
				}
			}
		}
		else
		{
			if (c > d)
			{
				if (c > e)
				{
					cout << c << " is the greatest" << endl;
				}
				else
				{
					cout << e << " is the greatest" << endl;
				}
			}
			else
			{
				if (d > e)
				{
					cout << d << " is the greatest" << endl;
				}
				else
				{
					cout << e << " is the greatest" << endl;
				}
			}
		}
	}
	else
	{
		if (b > c)
		{
			if (b > d)
			{
				if (b > e)
				{
					cout << b << " is the greatest" << endl;
				}
				else
				{
					cout << e << " is the greatest" << endl;
				}
			}
			else
			{
				if (d > e)
				{
					cout << d << " is the greatest" << endl;
				}
				else
				{
					cout << e << " is the greatest" << endl;
				}
			}
		}
		else
		{
			if (c > d)
			{
				if (c > e)
				{
					cout << c << " is the greatest" << endl;
				}
				else
				{
					cout << e << " is the greatest" << endl;
				}
			}
			else
			{
				if (d > e)
				{
					cout << d << " is the greatest" << endl;
				}
				else
				{
					cout << e << " is the greatest" << endl;
				}
			}
		}
	}
	return 0;
}