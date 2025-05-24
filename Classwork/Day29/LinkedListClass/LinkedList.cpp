#include<iostream>
#include<Node.h>
#include<LinkedList.h>
using namespace std;

LinkedList::LinkedList()
{
	head = nullptr;
}

LinkedList::~LinkedList()
{
	Node* temp1 = head, *temp2 = head;
	while (temp1!=nullptr)
	{
		temp2 = temp1->getNext();
		delete temp1;
		temp1 = temp2;
	}
}

Node* LinkedList::createNode(int val)
{
	Node* n = new Node;
	n->setData(val);
	n->setNext(nullptr);
}

void LinkedList::insertAtBeginning(int val)
{
	Node* n = createNode(val);
	if (head == nullptr)
		head = n;

}
void LinkedList::insertAtEnd(int);
void LinkedList::insertAtPosition(int, int);
void LinkedList::deleteAtBeginning();
void LinkedList::deleteAtEnd();
void LinkedList::deleteAtPosition();
void LinkedList::displayList();
int LinkedList::searchList(int);
void LinkedList::updateList(int, int);