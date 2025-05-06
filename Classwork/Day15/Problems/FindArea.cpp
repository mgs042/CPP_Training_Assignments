#include<iostream>
#include<cstdlib>
using namespace std;

#define PI 3.14

float rectangleArea(float, float);
float squareArea(float);
float triangleArea(float, float);
float circleArea(float);
int displayMenu();
void switchFunc(int);

int main(int argc, char *argv[])
{
	int choice=1;
	if (argc == 1)
	{
		while (choice > 0 && choice <= 4)
		{
			choice = displayMenu();
			switchFunc(choice);
			cout << endl;
		}
		
	}
	else
	{
		switch (atoi(argv[1]))
		{
		default:
			cout << "Invalid choice!!!";
			break;
		case 1:
			cout << "\tArea of Rectangle" << endl;
			if (argc != 4)
			{
				cout << "Invalid Number of arguments";
				return 0;
			}
			cout << "Area: " << rectangleArea(atof(argv[2]), atof(argv[3]));
			break;
		case 2:
			cout << "\tArea of Square" << endl;
			if (argc != 3)
			{
				cout << "Invalid Number of arguments";
				return 0;
			}
			cout << "Area: " << squareArea(atof(argv[2]));
			break;
		case 3:
			cout << "\tArea of Triangle" << endl;
			if (argc != 4)
			{
				cout << "Invalid Number of arguments";
				return 0;
			}
			cout << "Area: " << triangleArea(atof(argv[2]), atof(argv[3]));
			break;
		case 4:
			cout << "\tArea of Circle" << endl;
			if (argc != 3)
			{
				cout << "Invalid Number of arguments";
				return 0;
			}
			cout << "Area: " << circleArea(atof(argv[2]));
			break;
		case 5:
			cout << "Exiting !!!" << endl;
			return 0;
			break;
		}
		cout << endl;
	}
	
}


float rectangleArea(float l, float b)
{
	return l * b;
}

float squareArea(float s)
{
	return s * s;
}

float triangleArea(float b, float h)
{
	return 0.5 * b * h;
}

float circleArea(float r)
{
	return PI * r * r;
}

int displayMenu()
{
	int choice;
	cout << "\tMenu" << endl;
	cout << "\t~~~~" << endl;
	cout << "1. Area of Rectangle" << endl;
	cout << "2. Area of Square" << endl;
	cout << "3. Area of Triangle" << endl;
	cout << "4. Area of Circle" << endl;
	cout << "5. Exit" << endl << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	cout << endl;
	return choice;
}

void switchFunc(int choice)
{
	float a = 0, b = 0;
	switch (choice)
	{
	default:
		cout << "Invalid choice!!!";
		break;
	case 1:
		cout << "\tArea of Rectangle" << endl;
		cout << "Enter the length: ";
		cin >> a;
		cout << "Enter the breadth: ";
		cin >> b;
		cout << "Area: " << rectangleArea(a, b);
		break;
	case 2:
		cout << "\tArea of Square" << endl;
		cout << "Enter the side: ";
		cin >> a;
		cout << "Area: " << squareArea(a);
		break;
	case 3:
		cout << "\tArea of Triangle" << endl;
		cout << "Enter the base: ";
		cin >> a;
		cout << "Enter the height: ";
		cin >> b;
		cout << "Area: " << triangleArea(a, b);
		break;
	case 4:
		cout << "\tArea of Circle" << endl;
		cout << "Enter the radius: ";
		cin >> a;
		cout << "Area: " << circleArea(a);
		break;
	case 5:
		cout << "Exiting !!!" << endl;
		return;
		break;
	}
	cout << endl;
}