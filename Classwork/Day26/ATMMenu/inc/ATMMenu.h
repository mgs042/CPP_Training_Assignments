#pragma once
#include<string>
using namespace std;
class ATMMenu
{
	string accountHolder;
	float accountBalance;
	int pin;
	bool checkPin(int);
public:
	void setAccountHolder(string);
	void setAccountBalance(float);
	void setPin(int);
	string getAccountHolder();
	bool deposit(int, float);
	bool withdraw(int, float);
	float checkBalance(int);
};
