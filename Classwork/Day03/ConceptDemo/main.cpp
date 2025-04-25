#include <iostream>
#include<string.h>
using namespace std;

class Test
{
	mutable int counter; //
public:
	void update() const { //decalring a memeber function as const means the function cannot modify its members, unless the members are mutable
		counter++;
	}
};
int func(int);
int* func2(int);
int main()
{
	char firstName[100], secondName[100] = { "hello World" };
	memset(firstName, '\0', sizeof(firstName)); //initialize the entire character array with '\0' (null)
	strcat(firstName, secondName);
	cout << firstName << endl;

	for (register int i = 0; i < 100; ++i) //'register' used to store the variable in the CPU register
		cout << i << endl;

	int itr1 = 10; //global variable
	for (int itr1 = 0; itr1 < 5; ++itr1) //Local variable, scope is only within the for block
	{
		cout << "Local Variable: " << itr1 << endl;
		cout << &itr1 << endl;
	}
	cout << "Global Variable: " << itr1 << endl;
	cout << &itr1 << endl;
	bool flag = true;
	cout << flag << endl;
	flag = false;
	cout << flag << endl;

	cout << "\n\nStatic Qualifier" << endl;
	int r = 100;
	int ret = func(r);
	cout << ret << endl;
	ret = func(r);
	cout << ret << endl;

	cout << "\n\nDangling Pointer Situation" << endl;
	int* ptr = func2(10); //the pointer gets the address of a local variable of func2, so the pointer now points to a address of a variable that lost its scope
	cout << *ptr << endl;
	*ptr = 210;
	cout << *ptr << endl;


	cout << "\n\nType Conversion" << endl;
	cout << "\nImplicit" << endl;
	int a = 2;
	float b = 4.2;
	cout << "Result: " << a * b << " (" << typeid(a * b).name() << ")" << endl; //a is implicitly converted to float

	char q = 'A';
	cout << "Result: " << q + a << " (" << typeid(q + a).name() << ")" << endl; //q is implicitly converted to int

	double w = 3.4123;
	cout << "Result: " << b * w << " (" << typeid(b * w).name() <<")" << endl; //b is implicitly converted to double

	cout << "\nExplicit" << endl;
	cout << "Float: "<<b<<" to Int: "<< int(b) << endl;
	cout << "Char: " << q << " to Int: " << int(q) << endl;

	int c = 5;
	float d = c / a;
	float e = float(c) / float(a);
	cout << "\nImplict Conversion fails: " << d << " (" << typeid(d).name() << ")" << endl;
	cout << "Explicit Conversion instead: " << e << " (" << typeid(e).name() << ")" << endl;

	int x[] = { 10,20,30,40,50 };
	cout << 3[x]; //ithentha enne thamburan ariyam


	

}

int func(int v)
{
	static int temp = 1000;
	temp = temp + v;
	return temp;
}

int* func2(int v)
{
	//int r = 100;
	static int r = 100; //to avoid dangling pointers, ensures r exists for the program lifetime
	r = r + v;
	return &r;
}