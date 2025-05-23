#include<iostream>
#include<string>
#include<DeliveryTip.h>
using namespace std;

DeliveryTip::DeliveryTip(string id, int amt, int dist)
{
	orderId = id;
	billAmount = amt;
	distance = dist;
	tip = calculateTip();
}

string DeliveryTip::getOrderId()
{
	return orderId;
}

int DeliveryTip::getTip()
{
	return tip;
}

int DeliveryTip::calculateTip()
{
	if (distance > 10)
		return billAmount * 0.15;
	else if(distance>=5 && distance <= 10)
		return billAmount * 0.1;
	else if(distance<5&&distance>=0)
		return billAmount * 0.05;
	else
	{
		cout << "Invalid Distance";
		return 0;
	}
}

void DeliveryTip::printDetails()
{
	cout << "Order " << getOrderId() << " | Tip: $" << getTip() << endl;
}