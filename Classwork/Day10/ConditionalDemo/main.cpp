#include<iostream>
using namespace std;

int main()
{
	unsigned int batteryLevel, mobileStatus;
	cout << "Mobile status (0/1): ";
	cin >> mobileStatus;
	cout << endl;
	while (1)
	{
		if (mobileStatus == 1)
		{
			cout << "Battery level (0-100): ";
			cin >> batteryLevel;
			if (batteryLevel <= 15)
			{
				cout << "Charge the phone to use it !!!" << endl;
				exit(0);
			}
			int choice;
			cout << "What do you want to do ?" << endl;
			cout << "1. Make a call" << endl;
			cout << "2. Browse the internet" << endl;
			cout << "3. Play a game" << endl;
			cout << "Enter your choice: ";
			cin >> choice;
			cout << endl;
			switch (choice)
			{
			default:
				cout << "Unrecognized Option" << endl << endl;
				break;
			case 1:
				cout << "Calling !!!" << endl<<endl;
				break;
			case 2:
				cout << "Browsing the Internet" << endl << endl;
				break;
			case 3:
				cout << "Playing a game" << endl << endl;
				break;
					
			}
		}
		else
		{
			cout << "Powering on the mobile" << endl<<endl;
			cout << "Mobile Status (0/1): ";
			cin >> mobileStatus;
			cout << endl;
			if (mobileStatus == 1)
			{
				cout << "Battery level (0-100): ";
				cin >> batteryLevel;
				if (batteryLevel <= 15)
				{
					cout << "Charge the phone to use it !!!" << endl;
					exit(0);
				}
				
			}
			else
			{
				cout << "Mobile has a problem!!!" << endl << endl;
				exit(0);
			}

		}
	}
	
	return 0;
}