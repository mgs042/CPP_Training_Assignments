#include <iostream>
using namespace std;
int display();
int main() {
	/*int v1 = 11;
	if(v1>10)
	goto END;
	else
	cout<<"Within Limit"<<endl;
	END:*/
	while (1)
	{
		cout << endl;
		int ret = display();
		switch (ret)
		{
		default:
			cout << "Invalid Choice" << endl;
			break;
		case 1:
			cout << "Addition" << endl;
			break;
		case 2:
			cout << "Subtraction" << endl;
			break;
		case 3:
			cout << "Multiplication" << endl;
			break;
		case 4:
			cout << "Division" << endl;
			break;
		case 0:
			cout << "Exit" << endl;
			goto END;
			break;
		}
	}
END:
	cout << "Program was executed successfully" << endl << endl;

		return 0;
}

int display()
{
	int choice;
	cout << "\t\tPress" << endl;
	cout << "\t\t~~~~~" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "0. Exit" << endl << endl;
	cout << "Press your choice: ";
	cin >> choice;
		
	return choice;

}