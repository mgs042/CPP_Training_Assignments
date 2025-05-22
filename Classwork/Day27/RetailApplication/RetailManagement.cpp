#include<iostream>
#include<string>
#include<Product.h>
#include<RetailManagement.h>
using namespace std;

#define MAX 100

float RetailManagement::calcTax(float price)
{
	return price * 0.04;
}
bool RetailManagement::addProduct(Product p)
{
	if (noOfProducts == MAX - 1)
		return false;
	products[noOfProducts] = p;
	noOfProducts++;
	return true;
}
bool RetailManagement::updateProduct(int index, Product p) 
{
	if (index < 0 || index >= noOfProducts)
		return false;
	products[index] = p;
	return true;
}
int RetailManagement::searchProduct(string name)
{
	int index = 0, count = 0;
	for (int i = 0; i <= noOfProducts; ++i)
	{
		if (products[i].getProductName().find(name)!=string::npos)
		{
			cout << "Produce Code: " << products[i].getProductCode() << "\tProduct Name: " << products[i].getProductName() << endl;
			index = i;
			count++;
		}
	}
	if (count == 1)
		return index;
	else
		return -1;

}
bool RetailManagement::deleteProduct(int index)
{
	if (index < 0 || index >= noOfProducts)
		return false;
	else
	{
		products[index].setProductAvailability(false);
		return true;
	}

}
void RetailManagement::printBill()
{
	char ch;
	string name;
	int index, bought[MAX], i = 0;
	float totalSum = 0;
	do
	{
		cout << "Do you wish to buy a product ? [y/n]: ";
		cin >> ch;
		if (ch == 'n')
			break;
		cout << "Enter the name of the product: ";
		getline(cin, name);
		index = searchProduct(name);
		if (index == -1)
		{
			cout << "No specific Product was found" << endl;
		}
		else
		{
			if (!products[index].getProductAvailability())
			{
				cout << "Product not available" << endl;
			}
			else
			{
				bought[i++] = index;
				totalSum += products[index].getProductPrice();
				products[index].setProductQuantity(products[index].getProductQuantity() - 1);
				if (products[index].getProductQuantity() == 0)
					products[index].setProductAvailability(false);
			}
		}
	} while (ch == 'y');
	cout << "--------------------------------------------Bill--------------------------------------------" << endl;
	for (int j = 0; j < i; ++j)
	{
		cout << products[bought[j]].getProductCode() << "\t" << products[bought[j]].getProductName() << "\t" << products[bought[j]].getProductPrice() << "\t" << calcTax(products[bought[j]].getProductPrice()) << endl;
	}
}