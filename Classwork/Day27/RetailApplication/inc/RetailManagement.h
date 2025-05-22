#pragma once
#include<Product.h>
#include<string>
using namespace std;
#define MAX 100

class RetailManagement
{
	int noOfProducts;
	Product products[MAX];
	float calcTax(float);
public:
	bool addProduct(Product);
	bool updateProduct(int, Product);
	int searchProduct(string);
	bool deleteProduct(int);
	void printBill();
};