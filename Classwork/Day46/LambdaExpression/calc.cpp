#include<iostream>

int menu()
{
	int c;
	std::cout << std::endl;
	std::cout << "\tMain Menu" << std::endl;
	std::cout << "1. Add" << std::endl;
	std::cout << "2. Sub" << std::endl;
	std::cout << "3. Mul" << std::endl;
	std::cout << "4. Div" << std::endl;
	std::cout << "5. Exit" << std::endl;
	std::cout << "Enter your choice: ";
	std::cin >> c;
	return c;
}

int main()
{
	int choice;
	int a, b;
	auto add = [](int x, int y) {return x + y;};
	auto sub = [](int x, int y) {return x - y;};
	auto mul = [](int x, int y) {return x * y;};
	auto div = [](int x, int y) {return x / y;};
	while ((choice = menu()) != 5)
	{
		switch (choice)
		{
		case 1:
			std::cout << "Enter number 1: ";
			std::cin >> a;
			std::cout << "Enter number 2: ";
			std::cin >> b;
			std::cout << "Sum = " << add(a, b) << std::endl;
			break;
		case 2:
			std::cout << "Enter number 1: ";
			std::cin >> a;
			std::cout << "Enter number 2: ";
			std::cin >> b;
			std::cout << "Diff = " << sub(a, b) << std::endl;
			break;
		case 3:
			std::cout << "Enter number 1: ";
			std::cin >> a;
			std::cout << "Enter number 2: ";
			std::cin >> b;
			std::cout << "Pro = " << mul(a, b) << std::endl;
			break;
		case 4:
			std::cout << "Enter number 1: ";
			std::cin >> a;
			std::cout << "Enter number 2: ";
			std::cin >> b;
			std::cout << "Div = " << div(a, b) << std::endl;
			break;
		case 5:
			std::cout << "Exit...." << std::endl;
			return 0;
			break;
		default:
			std::cout << "Invalid Input" << std::endl;
			break;

		}
	}
}