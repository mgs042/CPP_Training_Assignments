/*
2) The selling price & profit are entered. Write a program to calculate cost price of item.
*/

#include<iostream>
using namespace std;

int main()
{
	int sellingPrice, profit, costPrice;
	cout << "Enter Selling Price: ";
	cin >> sellingPrice;
	cout << "Enter Profit: ";
	cin >> profit;
	costPrice = sellingPrice - profit;
	cout << "Cost Price : " << costPrice;

}