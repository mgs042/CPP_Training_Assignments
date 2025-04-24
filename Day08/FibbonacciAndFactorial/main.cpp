#include<iostream>
#include<fibonacci.h>
#include<factorial.h>
using namespace std;

int main()
{
	int choice, n;
	while (1)
	{
		cout << "\t\tMenu" << endl;
		cout << "\t\t~~~~" << endl;
		cout << "1. Fibonacci" << endl;
		cout << "2. Factorial" << endl;
		cout << "3. Exit" << endl;
		cout << endl << "Enter your choice: ";
		cin >> choice;
		cout << endl;
		if (choice < 3)
		{
			cout << "Enter the value of N: ";
			cin >> n;
			cout << endl;
		}
		switch (choice)
		{
			default:
				cout << "Invalid Input" << endl;
				break;
			case 1:
				cout << "\tFibonacci" << endl << endl;
				fibonacci(n);
				break;
			case 2:
				cout << "\tFactorial" << endl << endl;
				cout<<"Factorial is: "<<factorial(n);
				break;
			case 3:
				cout << "Exit" << endl;
				exit(0);
		}
		cout << endl << endl;

	}
}