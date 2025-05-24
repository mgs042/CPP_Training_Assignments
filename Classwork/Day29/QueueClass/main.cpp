#include<iostream>
#include<Queue.h>
using namespace std;

int main()
{
	Queue q;
	q.enqueue(5);
	q.enqueue(10);
	q.enqueue(23);
	q.enqueue(45);
	q.enqueue(33);
	q.display();
	q.dequeue();
	q.dequeue();
	q.display();
	return 0;
}