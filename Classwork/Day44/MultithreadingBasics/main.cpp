#include<iostream>
#include<thread>
#include<string>

void greet()
{
	std::cout << "Hello World" << std::endl;
}

void display(int x)
{
	std::cout << "X: " << x << std::endl;
}

void modifyX(int& x)
{
	x += 10;
}

typedef unsigned long long int ULL;

void printX(ULL x, std::string s)
{
	for (int i = 0; i < x; ++i)
		std::cout << s << " = " << i << std::endl;
}

int main()
{
	//std::thread t(greet);
	//t.join(); //Wait for the thread to complete execution-- Join thread to main func
	//std::cout << "End of program" << std::endl;
	////t.join(); raises issue because t has completed its execution and now is lost -- so not joinable
	//std::thread t1(display, 101); //call by Value
	//t1.join();
	//int a = 5;
	//std::thread t2(modifyX, std::ref(a)); //cal by reference
	//std::cout << "Original Value: " << a << std::endl;
	//t2.join();
	//std::cout << "Modified Value: " << a << std::endl;

	std::thread t1(printX, 999999999999, "t1");
	std::thread t2(printX, 999999999, "t2");
	t1.join();
	t2.join();
	return 0;

}