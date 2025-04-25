#include<iostream>
using namespace std;

void display(void); //no args no return
int displayRet(void); //no args but with return
void sumIntegers(int, int); // 2 args but no return
int subIntegers(int, int); // 2 args with return

int main()
{
	/*int ch;
	display();
	cout << "Enter a choice: ";
	cin >> ch;
	cout << endl;*/
	switch (displayRet())
	{
	default:
		cout << "\tWrong Choice !!!" << endl;
	case 1:
		cout << "\tAddition"<<endl;
		sumIntegers(20, 15);
		break;
	case 2:
		cout << "\tSubtraction" << endl;
		cout << "20 - 15 = " << subIntegers(20, 15);
		break;
	case 3:
		cout << "\tMultiplication" << endl;
		break;
	case 4:
		cout << "\tDivision" << endl;
		break;
	}
	cout << endl;
	return 0;
}

void display(void)
{
	cout << "\t\tMenu"<<endl;
	cout << "\t\t~~~~" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	return;
}

int displayRet(void)
{
	int ch;
	cout << "\t\tMenu" << endl;
	cout << "\t\t~~~~" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "Enter a choice: ";
	cin >> ch;
	cout << endl;
	return ch;
}

void sumIntegers(int v1, int v2)
{
	cout << v1 << " + " << v2 << " = " << v1 + v2;
}
int subIntegers(int v1, int v2)
{
	return v1 - v2;
}
