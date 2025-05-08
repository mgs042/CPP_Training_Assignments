#include <iostream>
using namespace std;

int purchase(int balance, int purchaseAmount);
int refill(int capacity, int balance);

int main()
{
	int N = 10, k = 5, con = 1, purchaseAmount, balanceAmount=N;
	while (con == 1)
	{
		cout << "Enter the amount to be purchased: ";
		cin >> purchaseAmount;
		balanceAmount = purchase(balanceAmount, purchaseAmount);
		cout << "Balance remaining: " << balanceAmount << endl;
		if (balanceAmount <= k)
		{
			balanceAmount = refill(N, balanceAmount);
		}
		cout << endl << "Do you wish to continue? [0/1]: ";
		cin >> con;
		cout << endl << endl;
	}
}

int purchase(int balance, int purchaseAmount)
{
	if (purchaseAmount > balance)
	{
		cout << "Insufficient Balance -- Purchase cannot be made" << endl;
		return balance;
	}
	else
	{
		balance = balance - purchaseAmount;
		cout << "Purchase of " << purchaseAmount << " made" << endl;
		return balance;
	}
}

int refill(int capacity, int balance)
{
	cout << "Refilling with " << capacity - balance << " candies" << endl;
	balance = capacity;
	return balance;
}