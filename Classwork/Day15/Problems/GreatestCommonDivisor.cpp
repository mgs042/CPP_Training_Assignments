#include<iostream>
using namespace std;

int greatestCommonDivisor(int, int);

int main()
{
	int num1, num2;
	cout << "Enter 2 no.s: ";
	cin >> num1 >> num2;
	cout << endl;
	cout << "Greatest Common Divisor is: " << greatestCommonDivisor(num1, num2) << endl;
	return 0;
}

int greatestCommonDivisor(int n1, int n2)
{
	int a = (n1 > n2) ? n1 : n2, b = (n1 < n2) ? n1 : n2, t;
	while (a % b != 0)  //Euclidean Division
	{
		t = b;
		b = a % b;
		a = t;
	}
	return b;

}