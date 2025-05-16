/*
structure basics
*/

#include<iostream>
using namespace std;

struct book
{
	int isbin;
	char title[20];
	float price;
	char author[20];
};

int main()
{
	struct book b1;
	b1.isbin = 10;
	sprintf_s(b1.title, "Let us C++");
	b1.price = 99.45;
	sprintf_s(b1.author, "Yeshwanth");
	cout << b1.isbin << endl;
	cout << b1.title << endl;
	cout << b1.price << endl;
	cout << b1.author << endl;
	cout << endl;
	struct book* b2 = &b1;
	cout << b2->isbin << endl;
	cout << b2->title << endl;
	cout << b2->price << endl;
	cout << b2->author << endl;
	cout << endl;
	struct book* b3 = (struct book *)malloc(sizeof(struct book));
	memset(b3, '/0', sizeof(struct book));
	b3->isbin = 10;
	sprintf_s(b3->title, "Let us C++");
	b3->price = 99.45;
	sprintf_s(b3->author, "Yeshwanth");
	cout << b3->isbin << endl;
	cout << b3->title << endl;
	cout << b3->price << endl;
	cout << b3->author << endl;
	return 0;
}