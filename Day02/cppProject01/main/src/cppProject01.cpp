/*
Desc: Menu-Driven Program to demonstrate Arithematic Operators
Author: Gouri Sankar M
DOC/DOM: 15/04/25
Version: 0.1v
*/
#include <iostream>
#include <main.h>
using namespace std;
int main()
{
    int n = 0, a, b;
    while (n != 6)
    {
        cout << "\n\n\t\t\tMenu" << endl;
        cout << "\t\t\t~~~~" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulo" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice[1/2/3/4/5/6]: ";
        cin >> n;
        cout << "\n";
        if (n < 6 && n > 0)
        {
            cout << "Enter Operand 1: ";
            cin >> a;
            cout << "Enter Operand 2: ";
            cin >> b;
        }
        cout << "\n";
        switch (n)
        {
        case 1:
            cout << "\tAddition" << endl;
            cout << "Answer is " << addition(a,b) << endl;
            break;
        case 2:
            cout << "\tSubtraction" << endl;
            cout << "Answer is " << subtract(a,b) << endl;
            break;
        case 3:
            cout << "\tMultiplication" << endl;
            cout << "Answer is " << multiplication(a,b) << endl;
            break;
        case 4:
            cout << "\tDivision" << endl;
            cout << "Answer is " << division(a,b) << endl;
            break;
        case 5:
            cout << "\tModulo" << endl;
            cout << "Answer is " << modulo(a,b) << endl;
            break;
        case 6:
            cout << "\tExit" << endl;
            cout << "Exiting" << endl;
            exit(0);
            break;
        default:
            cout << "Invalid Option";
            break;
        }
    }
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
