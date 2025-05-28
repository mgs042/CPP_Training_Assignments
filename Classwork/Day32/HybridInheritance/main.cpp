#include<iostream>
using namespace std;

class Animal
{
public:
	void eat() { cout << "Eat" << endl; }
	void walk() { cout << "Walk" << endl; }
	void makeASound() { cout << "Make a sound" << endl; }
	virtual void soundLike() { cout << "Animal Sound" << endl; }
};

class cat : public Animal
{
public:
	void dispCat() { cout << "Cat" << endl; }
	void soundLike() { cout << "Meow!" << endl; }
};

class dog : public Animal
{
public:
	void dispDog() { cout << "Dog" << endl; }
	void soundLike() { cout << "Bow!" << endl; }
};

int main()
{
	Animal a;
	a.eat();
	a.walk();
	a.makeASound();
	a.soundLike();
	cout << "=======================" << endl;
	Animal* ptr = nullptr;
	cat c;
	ptr = &c;
	//c.dispCat();
	ptr->eat();
	ptr->walk();
	ptr->makeASound();
	ptr->soundLike();
	cout << "=======================" << endl;
	dog d;
	ptr = &d;
	//d.dispDog();
	ptr->eat();
	ptr->walk();
	ptr->makeASound();
	ptr->soundLike();
}