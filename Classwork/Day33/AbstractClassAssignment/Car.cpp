#include<iostream>
#include<string>
using namespace std;

class Car
{
protected:
	string model;
	float price;
public:
	void setModel(string m)
	{
		this->model = m;
	}
	virtual void setPrice(float p) = 0;
};

class Color :public Car
{
	string color;
public:
	Color(string c) :color(c) {}
	void setPrice(float p)
	{
		this->price = p;
	}
	void display()
	{
		cout << "Model: " << model << endl;
		cout << "Price: " << price << endl;
		cout << "Color: " << color << endl;
	}
};

class Company :public Car
{
	string company;
public:
	Company(string c):company(c){}
	void setPrice(float p)
	{
		this->price = p;
	}
	void display()
	{
		cout << "Model: " << model << endl;
		cout << "Price: " << price << endl;
		cout << "Company: " << company << endl;
	}
};

int main()
{
	Color car1("Red");
	car1.setModel("Innova");
	car1.setPrice(40000);
	Company car2("Toyota");
	car2.setModel("Camry");
	car2.setPrice(400000);
	car1.display();
	cout << endl;
	car2.display();
	return 0;
}