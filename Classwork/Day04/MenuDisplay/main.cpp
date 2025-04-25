#include <iostream>
using namespace std;

typedef struct {
	int uId;
	int userType; //0 for Admin or non-zero for Normal Users
	string userName;

}USERS;

void displayNormalMenu();
void displayAdminMenu();

int main()
{
	USERS user1;
	cout << "Enter user ID: ";
	cin >> user1.uId;
	cout << "Enter user type: ";
	cin >> user1.userType;
	cout << "Enter user name: ";
	cin >> user1.userName;

	if (user1.userType == 0)
	{
		displayAdminMenu();
	}
	else
	{
		displayNormalMenu();
	}
}

void displayNormalMenu()
{
	cout << "\n\nNormal Menu is Displayed";
}

void displayAdminMenu()
{
	cout << "\n\nAdmin Menu is Displayed";
}