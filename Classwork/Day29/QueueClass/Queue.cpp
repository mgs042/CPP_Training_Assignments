#include<iostream>
using namespace std;
#include<Queue.h>

Queue::Queue()
{
	front = -1;
	rear = -1;
	size = 1;
	queue = new int[size];
}

bool Queue::enqueue(int val)
{
	if (rear == size - 1)
	{
		size *= 2;
		int* ptr = new int[size];
		for (int i = front; i <= rear; ++i)
			ptr[i] = queue[i];
		delete[] queue;
		queue = ptr;
	}
	if (front = -1)
		front++;
	queue[++rear] = val;
	return true;
}

int Queue::dequeue()
{
	return queue[front++];
}

void Queue::display()
{
	cout << "Queue is: ";
	for (int i = front; i <= rear; ++i)
		cout << queue[i] << " ";
	cout << endl;

}