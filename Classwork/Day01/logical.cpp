/*
Desc: Menu-Driven Program to demonstrate Logical Operators
Author: Gouri Sankar M
DOC/DOM: 15/04/25
Version: 0.1v
*/
#include <iostream>
using namespace std;
int main()
{
    int n = 0,a,b;
    while(n != 4)
    {
        cout<<"\n\n\t\t\tMenu"<<endl;
        cout<<"\t\t\t~~~~"<<endl;
        cout<<"1. AND"<<endl;
        cout<<"2. OR"<<endl;
        cout<<"3. NOT"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice[1/2/3/4]: ";
        cin>>n;
        cout<<"\n";
        if(n < 3 && n > 0)
        {   
            cout<<"Enter Operand 1 [0 for FALSE and any other number for TRUE]: ";
            cin>>a;
            cout<<"Enter Operand 2 [0 for FALSE and any other number for TRUE]: ";
            cin>>b;
        }
        if(n == 3)
        {
            cout<<"Enter Operand 1 [0 for FALSE and any other number for TRUE]: ";
            cin>>a;
        }
        cout<<"\n";
        switch(n)
        {
            case 1:
                cout<<"\tAND"<<endl;
                cout<<"Answer is "<<((a&&b)?"True":"False")<<endl;
                break;
            case 2:
                cout<<"\tOR"<<endl;
                cout<<"Answer is "<<((a||b)?"True":"False")<<endl;
                break;
            case 3:
                cout<<"\tNOT"<<endl;
                cout<<"Answer is "<<((!a)?"True":"False")<<endl;
                break;
            case 4:
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