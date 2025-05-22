#include<iostream>
#include<string>
#include<ATMMenu.h>
using namespace std;

void ATMMenu::setAccountHolder(string name)
{
	accountHolder = name;
}

void ATMMenu::setAccountBalance(float balance)
{
	accountBalance = balance;
}

string ATMMenu::getAccountHolder()
{
	return accountHolder;
}

float ATMMenu::checkBalance(int inputPin)
{
	if (!checkPin(inputPin))
		return 0.0;
	else
	{
		return accountBalance;
	}
}

void ATMMenu::setPin(int inputPin)
{
	if (!checkPin(inputPin))
	{
		cout << "PIN Incorrect" << endl;
	}
	else
	{
		int pin;
		cout << "Enter a PIN: ";
		cin >> pin;
		if (pin < 1000 || pin>9999)
			cout << "Invalid Pin" << endl;
		else
			
	}
}

bool ATMMenu::checkPin(int inputPin)
{
	return pin == inputPin;
}



bool ATMMenu::deposit(int inputPin, float amount)
{
	if (amount < 0)
		return false;
	else if (!checkPin(inputPin))
		return false;
	else
	{
		setAccountBalance(checkBalance(inputPin) + amount);
		return true;
	}
}

bool ATMMenu::withdraw(int inputPin, float amount)
{
	if (amount < 0 || amount>checkBalance(inputPin))
		return false;
	else if (!checkPin(inputPin))
		return false;
	else
	{
		setAccountBalance(checkBalance(inputPin) - amount);
		return true;
	}
}