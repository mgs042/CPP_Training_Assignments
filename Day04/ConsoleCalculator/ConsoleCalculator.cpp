// ConsoleCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    switch (argv[1][0])
    {
        case '+':
            cout << "Result: "<< atoi(argv[2]) + atoi(argv[3])<<endl;
            break;
            
        case '-':
            cout << "Result: " << atoi(argv[2]) - atoi(argv[3])<<endl;
            break;
        case '*':
            cout << "Result: " << atoi(argv[2]) * atoi(argv[3])<<endl;
            break;
        case '/':
            cout << "Result: " << atoi(argv[2]) / atoi(argv[3])<<endl;
            break;

    }
    char h[20];
    strcat(h, "world");
}

