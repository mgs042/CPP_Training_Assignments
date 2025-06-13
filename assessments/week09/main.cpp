#include<CDRProcessor.h>
#include<iostream>
#include<thread>

int loginScreen()
{
	std::cout << std::endl;
	int ch;
	std::cout << "Login Screen" << std::endl;
	std::cout << "1. Login" << std::endl;
	std::cout << "2. SignUp" << std::endl;
	std::cout << "3. Exit" << std::endl;
	std::cout << "Choice: ";
	std::cin >> ch;
	std::cout << std::endl;
	return ch;
}

int mainMenu()
{
	std::cout << std::endl;
	int ch;
	std::cout << "Main-Menu" << std::endl;
	std::cout << "1. Process CDR File" << std::endl;
	std::cout << "2. Search Billing Info" << std::endl;
	std::cout << "3. Logout" << std::endl;
	std::cout << "Choice: ";
	std::cin >> ch;
	std::cout << std::endl;
	return ch;
}

int subMenu()
{
	std::cout << std::endl;
	int choice;
	std::cout << "Sub-Menu"<<std::endl;
	std::cout << "1. Customer Billing" << std::endl;
	std::cout << "2. Interoperator Settlement Billing" << std::endl;
	std::cout << "3. Back" << std::endl;
	std::cout << "Choice: ";
	std::cin >> choice;
	std::cout << std::endl;
	return choice;

}

void processFiles(CDRProcessor& ob)
{
	std::thread t1(&CDRProcessor::readCDRForCustomer, &ob);
	std::thread t2(&CDRProcessor::readCDRForOperator, &ob);
	t1.join();
	t2.join();
}

int main()
{
	CDRProcessor ob("data.cdr");
	/*ob.readCDRForCustomer();
	ob.customerBillingById("1522840");*/
	/*ob.readCDRForOperator();
	ob.operatorBillingById("42500");*/
	int choice, choice2;
	std::string s;
	while ((choice = mainMenu()) != 3)
	{
		switch (choice)
		{
		default:
			std::cout << "Invalid Choice" << std::endl;
			break;
		case 1:
			std::cout << "Processing Files......" << std::endl;
			processFiles(ob);
			std::cout << "All files processed" << std::endl;
			break;
		case 2:
			while ((choice2 = subMenu())!=3)
			{
				switch (choice2)
				{
				default:
					std::cout << "Invalid option" << std::endl;
					break;
				case 1:
					std::cout << "Enter the MSISDN of customer: ";
					std::cin.ignore();
					getline(std::cin, s);
					ob.customerBillingById(s);
					break;
				case 2:
					std::cout << "Enter the MMC\MNC of operator: ";
					std::cin.ignore();
					getline(std::cin, s);
					ob.operatorBillingById(s);
					break;
				}
			}
			break;
		case 3:
			std::cout << "Logout" << std::endl;
			break;

		}
	}

	return 0;
}