#include<iostream>
using namespace std;

int main()
{
	int N,pos=1,evenProduct=1,oddProduct=1;
	cout << "Enter the value of N: ";
	cin >> N;
	while (N > 0)
	{
		if (pos % 2 == 0)
			evenProduct *= (N % 10);
		else
			oddProduct *= (N % 10);
		N /= 10;
		pos++;
	}
	cout << "Even Position Product: " << evenProduct << endl;
	cout << "Odd Position Product: " << oddProduct << endl;
	if (evenProduct == oddProduct)
		cout << endl << "Equal Products!!!"<<endl;
	else
		cout << endl << "Not Equal Products!!!" << endl;

	return 0;
}