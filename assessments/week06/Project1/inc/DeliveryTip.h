#pragma once
#include<string>
using namespace std;

class DeliveryTip
{
private:
	string orderId;
	int billAmount;
	int distance;
	int tip;
	int calculateTip();
	string getOrderId();
	int getTip();
public:
	DeliveryTip(string, int, int);
	void printDetails();
};