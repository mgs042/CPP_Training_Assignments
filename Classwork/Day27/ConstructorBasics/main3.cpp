#include<iostream>
using namespace std;

class BankAccount
{
	static int accCount;
	int accNo;
public:
	BankAccount()
	{
		accCount++;
		accNo = accCount;
	}
	static int getAccCount()
	{
		return accCount;
	}
	int getAccNo() const
	{
		return accNo;
	}
};
int BankAccount::accCount;

int main()
{
	BankAccount a[10];
	for (int i = 0; i < 10; ++i)
	{
		cout << "Account [" << i+1 << "]: " << a[i].getAccNo() << endl;
	}

}