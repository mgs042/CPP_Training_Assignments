#pragma once
#include<Node.h>
class LinkedList
{
	Node* head;
	Node* createNode(int);
	bool checkIfEmpty();
public:
	LinkedList();
	~LinkedList();
	void insertAtBeginning(int);
	void insertAtEnd(int);
	void insertAtPosition(int, int);
	void deleteAtBeginning();
	void deleteAtEnd();
	void deleteAtPosition(int);
	void displayList();
	Node* searchList(int);
	void updateList(Node*, int);
};