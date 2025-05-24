#pragma once
class Queue
{
private:
	int* queue;
	int front;
	int rear;
	int size;
public:
	Queue();
	bool enqueue(int);
	int dequeue();
	void display();
};