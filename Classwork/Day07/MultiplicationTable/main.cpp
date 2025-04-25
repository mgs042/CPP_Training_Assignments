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
	for (int i = start; i <= end; ++i)
	{
		for (int j = 1; j <= 10; ++j)
		{
			if (j == 10)
			{
				cout << i << " x " << j << " = " << i * j << endl;
			}
			else
			{
				cout << i << " x " << j << "  = " << i * j << endl;
			}
		}
			
		cout << "===============" << endl;
	}
}