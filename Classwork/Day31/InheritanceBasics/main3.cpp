#include<iostream>
using namespace std;

/*
Composition, Aggregation and Association are based on a has-a relationship.
Inheritance is based on a is-a relationship;
*/

class Vehicle
{
protected:
	int noOfTyres;
	int capacity;
	float speed;
public:
	Vehicle(int noOfTyres, int capacity, float speed)
	{
		this->noOfTyres = noOfTyres;
		this->capacity = capacity;
		this->speed = speed;
	}
	void setNoOfTyres(int noOfTyres)
	{
		this->noOfTyres = noOfTyres;
	}
	void setCapacity(int capacity)
	{
		this->capacity = capacity;
	}
	void setSpeed(float speed)
	{
		this->speed = speed;
	}
};

class Car :public Vehicle
{
private:
	int horsePower;
	string engine;
	string transmission;
	string fuelType;
public:
	Car(int horsePower, string engine, string transmission, string fuelType):Vehicle(4,4,120.0)
	{
		this->horsePower = horsePower;
		this->engine = engine;
		this->transmission = transmission;
		this->fuelType = fuelType;
	}
	void setHorsePower(int horsePower)
	{
		this->horsePower = horsePower;
	}
	void setEngine(string engine)
	{
		this->engine = engine;
	}
	void setTransmission(string transmission)
	{
		this->transmission = transmission;
	}
	void displayDetails()
	{
		cout << "Tyres: " << noOfTyres << endl;
		cout << "Fuel Type: " << fuelType << endl;
		cout << "Capacity: " << capacity << endl;
		cout << "Speed: " << speed << endl;
		cout << "Horse Power: " << horsePower << endl;
		cout << "Engine: " << engine << endl;
		cout << "Transmission: " << transmission << endl;

	}
};

int main()
{
	Car c(200, "4-litre", "automatic", "petrol");
	c.displayDetails();
	return 0;
}