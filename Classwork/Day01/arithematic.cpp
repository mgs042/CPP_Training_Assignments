/*
Desc: Menu-Driven Program to demonstrate Arithematic Operators
Author: Gouri Sankar M
DOC/DOM: 15/04/25
Version: 0.1v
*/
#include <iostream>
using namespace std;
int main()
{
    int n = 0,a,b;
    while(n != 6)
    {
        cout<<"\n\n\t\t\tMenu"<<endl;
        cout<<"\t\t\t~~~~"<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Modulo"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter your choice[1/2/3/4/5/6]: ";
        cin>>n;
        cout<<"\n";
        if(n < 6 && n > 0)
        {   
            cout<<"Enter Operand 1: ";
            cin>>a;
            cout<<"Enter Operand 2: ";
            cin>>b;
        }
        cout<<"\n";
        switch(n)
        {
            case 1:
                cout<<"\tAddition"<<endl;
                cout<<"Answer is "<<a+b<<endl;
                break;
            case 2:
                cout<<"\tSubtraction"<<endl;
                cout<<"Answer is "<<a-b<<endl;
                break;
            case 3:
                cout<<"\tMultiplication"<<endl;
                cout<<"Answer is "<<a*b<<endl;
                break;
            case 4:
                cout<<"\tDivision"<<endl;
                cout<<"Answer is "<<a/b<<endl;
                break;
            case 5:
                cout<<"\tModulo"<<endl;
                cout<<"Answer is "<<a%b<<endl;
                break;
            case 6:
                cout<<"\tExit"<<endl;
                cout<<"Exiting"<<endl;
                exit(0);
                break;
            default:
                cout<<"Invalid Option";
                break;
        }
    }
}