#pragma once
#include<Node.h>
class LinkedList
{
	Node* head;
	Node* createNode(int);
public:
	LinkedList();
	~LinkedList();
	void insertAtBeginning(int);
	void insertAtEnd(int);
	void insertAtPosition(int, int);
	void deleteAtBeginning();
	void deleteAtEnd();
	void deleteAtPosition();
	void displayList();
	int searchList(int);
	void updateList(int, int);
};