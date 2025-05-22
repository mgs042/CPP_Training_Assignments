#pragma once
#include<string>
using namespace std;
class Product
{
	bool productAvailability;
	int productQuantity;
	int productCode;
	float productPrice;
	string productName;
	string dateOfManufacturing;
	string dateOfExpiry;
public:
	void setProductName(string);
	void setProductPrice(float);
	void setProductQuantity(int);
	void setProductDOM(string);
	void setProductDOE(string);
	void setProductCode(int);
	void setProductAvailability(bool);
	string getProductName();
	float getProductPrice();
	int getProductQuantity();
	string getProductDOM();
	string getProductDOE();
	int getProductCode();
	bool getProductAvailability();
};