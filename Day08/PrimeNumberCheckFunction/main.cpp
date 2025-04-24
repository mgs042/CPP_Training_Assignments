#include<iostream>
#include<checkprime.h>
using namespace std;


int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	cout << endl;
	if (checkIfPrime(n))
		cout << "The number "<<n<<" is Prime" << endl;
	else
		cout << "The number "<<n<<" is not Prime" << endl;
	return 0;
}
