#pragma once
class Node
{
	int data;
	Node* next;
public:
	Node();
	Node(int, Node*);
	void setData(int);
	void setNext(Node*);
	int getData();
	Node* getNext();
};