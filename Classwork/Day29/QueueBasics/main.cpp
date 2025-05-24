#include<iostream>
using namespace std;
#define MAX 10
bool enqueue(int[], int, int&, int&);
int dequeue(int[], int&, int&);
void display(int[], int&, int&);


int main()
{
	int queue[MAX], front = -1, rear = -1;
	enqueue(queue, 19, front, rear);
	enqueue(queue, 2, front, rear);
	enqueue(queue, 15, front, rear);
	enqueue(queue, 5, front, rear);
	enqueue(queue, 4, front, rear);
	display(queue, front, rear);
	dequeue(queue, front, rear);
	dequeue(queue, front, rear);
	display(queue, front, rear);
	return 0;
}

bool enqueue(int queue[], int val, int& front, int& rear)
{
	if (rear == MAX-1)
	{
		cout << "Queue is full" << endl;
		return false;
	}
	queue[++rear] = val;
	if (front == -1)	//first element
		front++;
	return true;
}

int dequeue(int queue[], int& front, int& rear)
{
	if (front == rear)
	{
		cout << "Queue is Empty" << endl;
		front = 0;
		rear = 0;
	}
	else
	{
		return queue[front++];
	}
}

void display(int queue[], int& front, int& rear)
{
	cout << "Queue is: ";
	for (int i = front; i <= rear; ++i)
		cout << queue[i] << " ";
	cout << endl;
}