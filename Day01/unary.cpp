/*
Desc: Menu-Driven Program to demonstrate Unary Operators
Author: Gouri Sankar M
DOC/DOM: 15/04/25
Version: 0.1v
*/
#include <iostream>
using namespace std;
int main()
{
    int n = 0,a,b;
    while(n < 5)
    {
        cout<<"\n\n\t\t\tMenu"<<endl;
        cout<<"\t\t\t~~~~"<<endl;
        cout<<"1. Pre-increment"<<endl;
        cout<<"2. Post-increment"<<endl;
        cout<<"3. Pre-decrement"<<endl;
        cout<<"4. Post-decrement"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice[1/2/3/4/5]: ";
        cin>>n;
        cout<<"\n";
        if(n < 5 && n > 0)
        {   
            cout<<"Enter Operand 1: ";
            cin>>a;
        }
        cout<<"\n";
        switch(n)
        {
            case 1:
                cout<<"\tPre-Increment"<<endl;
                cout<<"During increment "<<++a<<endl;
                break;
            case 2:
                cout<<"\tPost-Increment"<<endl;
                cout<<"During increment "<<a++<<endl;
                break;
            case 3:
                cout<<"\tPre-Decrement"<<endl;
                cout<<"During dencrement "<<--a<<endl;
                break;
            case 4:
                cout<<"\tPost-Dencrement"<<endl;
                cout<<"During decrement "<<a--<<endl;
                break;
            case 5:
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