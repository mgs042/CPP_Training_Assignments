#include<iostream>
#include<Stack.h>
using namespace std;

int main()
{
	Stack s;
	s.push(5);
	s.push(3);
	s.push(8);
	s.push(2);
	s.push(9);
	cout << "After Push: " << endl;
	s.display();
	s.pop();
	s.pop();
	cout << endl;
	cout << "After Pop: " << endl;
	s.display();
	return 0;
}