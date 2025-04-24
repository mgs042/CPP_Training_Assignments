#include<iostream>
#define MAXBITES 10
using namespace std;

int main()
{
	int taste, plate = MAXBITES;
	do {
		cout << "Have a bite of the food!!!" << endl;
		plate--;
		cout << "How is the taste (0/1)? ";
		cin >> taste;
		cout << endl << endl;
	} while (taste > 0 && plate > 0);
	cout << endl << endl;
	if (plate == 0)
		cout << "Stopped eating because plate is empty!!!" << endl;
	else if (taste == 0)
		cout << "Taste was not good having " << MAXBITES-plate << " bites" << endl;
	
	return 0;
}