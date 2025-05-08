#include<iostream>
using namespace std;

void squarePattern(int);

int main()
{
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	cout << endl;
	squarePattern(n);
	return 0;
}





void squarePattern(int num)
{
	int j, k, l, m;
	for (int i = 0; i < num; ++i)
	{
		for (j = i; j < (num % 2 == 0 ? (num / 2) : ((num + 1) / 2)); ++j)
			cout << j << " ";
		for (k = j + 1; k <= num;++k)
			cout << k << " ";
		cout << endl;
		
	}
	
}