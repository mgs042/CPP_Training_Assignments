#include<iostream>
#include<Employee.h>
#include<EmpStack.h>
using namespace std;
int main()
{
	EmpStack ob;
	ob.push(101, "Hello");
	ob.push(102, "World");
	ob.push(201, "Gouri");
	ob.push(131, "Sankar");
	ob.push(11, "Mundanchery");
	ob.display();
	ob.pop();
	ob.pop();
	ob.display();
	return 0;
}