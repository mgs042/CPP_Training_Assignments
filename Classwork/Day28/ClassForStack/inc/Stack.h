#pragma once
class Stack
{
	int* stack;
	int top;
	int size;
public:
	Stack();
	bool push(int);
	int pop();
	void display();
};