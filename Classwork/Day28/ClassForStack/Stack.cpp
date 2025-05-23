#include<iostream>
using namespace std;
#include<Stack.h>

Stack::Stack()
{
	stack = nullptr;
	top = -1;
	size = 0;
}

bool Stack::push(int val)
{
	size++;
	int *ptr = new int[size];
	if (ptr == nullptr)
	{
		cout << "Unable to allocate memory" << endl;
		return false;
	}
	for (int i = 0; i < size - 1; ++i)
		ptr[i] = stack[i];
	delete[] stack;
	stack = ptr;
	stack[++top] = val;
	//cout << stack[top] << endl;
	return true;
}

int Stack::pop()
{
	return stack[top--];
}

void Stack::display()
{
	cout << "-------------------Stack-------------------" << endl;
	for (int i = top; i >= 0; --i)
		cout << stack[i] << endl;
}