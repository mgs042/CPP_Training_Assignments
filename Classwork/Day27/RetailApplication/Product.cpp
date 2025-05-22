#include<iostream>
#include<string>
#include<Product.h>
using namespace std;

void Product::setProductName(string name)
{
	productName = name;
}
void Product::setProductPrice(float price)
{
	productPrice = price;
}
void Product::setProductQuantity(int quantity)
{
	productQuantity = quantity;
}
void Product::setProductDOM(string dom)
{
	dateOfManufacturing = dom;
}
void Product::setProductDOE(string doe)
{
	dateOfExpiry = doe;
}
void Product::setProductCode(int code)
{
	productCode = code;
}
void Product::setProductAvailability(bool availability)
{
	productAvailability = availability;
}
string Product::getProductName()
{
	return productName;
}
float Product::getProductPrice()
{
	return productPrice;
}
int Product::getProductQuantity()
{
	return productQuantity;
}
string Product::getProductDOM()
{
	return dateOfManufacturing;
}
string Product::getProductDOE()
{
	return dateOfExpiry;
}
int Product::getProductCode()
{
	return productCode;
}
bool Product::getProductAvailability()
{
	return productAvailability;
}