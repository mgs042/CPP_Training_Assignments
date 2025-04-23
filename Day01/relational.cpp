/*
Desc: Menu-Driven Program to demonstrate Relational Operators
Author: Gouri Sankar M
DOC/DOM: 15/04/25
Version: 0.1v
*/
#include <iostream>
using namespace std;
int main()
{
    int n = 0,a,b;
    while(n != 7)
    {
        cout<<"\n\n\t\t\tMenu"<<endl;
        cout<<"\t\t\t~~~~"<<endl;
        cout<<"1. Greater Than"<<endl;
        cout<<"2. Less Than"<<endl;
        cout<<"3. Greater Than or Equal To"<<endl;
        cout<<"4. Less Than or Equal To"<<endl;
        cout<<"5. Equal To"<<endl;
        cout<<"6. Not Equal To"<<endl;
        cout<<"7. Exit"<<endl;
        cout<<"Enter your choice[1/2/3/4/5/6/7]: ";
        cin>>n;
        cout<<"\n";
        if(n < 7 && n > 0)
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
                cout<<"\tGreater Than"<<endl;
                cout<<"Answer is "<<((a>b)?"True":"False")<<endl;
                break;
            case 2:
                cout<<"\tLess Than"<<endl;
                cout<<"Answer is "<<((a<b)?"True":"False")<<endl;
                break;
            case 3:
                cout<<"\tGreater Than or Equal To"<<endl;
                cout<<"Answer is "<<((a>=b)?"True":"False")<<endl;
                break;
            case 4:
                cout<<"\tLess Than or Equal To"<<endl;
                cout<<"Answer is "<<((a<=b)?"True":"False")<<endl;
                break;
            case 5:
                cout<<"\tEqual To"<<endl;
                cout<<"Answer is "<<((a==b)?"True":"False")<<endl;
                break;
            case 6:
                cout<<"\tNot Equal To"<<endl;
                cout<<"Answer is "<<((a!=b)?"True":"False")<<endl;
                break;
            case 7:
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