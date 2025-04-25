#include<iostream>
using namespace std;

int main()
{
	int start, end;
	cout << "Enter the start table: ";
	cin >> start;
	cout << "Enter the end table: ";
	cin >> end;
	cout << endl;
	for (int i = 1; i <= 10; ++i)
	{
		for (int j = start; j <= end;++j)
		{
			if(i==10)
				cout << j << " x " << i << " = " << j * i;
			else
				cout << j << " x " << i << "  = " << j * i;
			if (j != end)
			{
				if(i*j<10)
					cout << "  || ";
				else
					cout << " || ";
			}
			else
			{
				cout << endl;
			}
		}
	}
}