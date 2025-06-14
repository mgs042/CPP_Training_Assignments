#include<iostream>

int main()
{
	auto greet = []() {std::cout << "Hello World" << std::endl;};
	//greet = []() {std::cout << "Hello" << std::endl;};
	auto greet1 = [](const std::string s) {std::cout << "Hello " << s << std::endl;};
	greet1("Gouri");

	return 0;
}