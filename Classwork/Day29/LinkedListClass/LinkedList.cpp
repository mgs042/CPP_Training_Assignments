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
	return n;
}

bool LinkedList::checkIfEmpty()
{
	return head == nullptr;
}

void LinkedList::insertAtBeginning(int val)
{
	Node* n = createNode(val);
	if (checkIfEmpty())
	{
		head = n;
		return;
	}
	n->setNext(head);
	head = n;
}
void LinkedList::insertAtEnd(int val)
{
	Node* n = createNode(val);
	if (checkIfEmpty())
	{
		head = n;
		return;
	}
	Node* ptr = head;
	while (ptr->getNext() != nullptr)
	{
		ptr = ptr->getNext();
	}
	ptr->setNext(n);
}
void LinkedList::insertAtPosition(int val, int pos)
{
	if (pos == 1)
	{
		insertAtBeginning(val);
		return;
	}
	Node* n = createNode(val);
	if (checkIfEmpty())
	{
		head = n;
		return;
	}
	Node* ptr = head;
	int p = 1;
	while (ptr != nullptr && p != pos-1)
	{
		ptr = ptr->getNext();
		p++;
	}
	if (p != pos - 1)
		return;
	n->setNext(ptr->getNext());
	ptr->setNext(n);
}
void LinkedList::deleteAtBeginning()
{
	if (checkIfEmpty())
	{
		cout << "List is Empty" << endl;
		return;
	}
	Node* temp = head;
	head = head->getNext();
	delete temp;
}
void LinkedList::deleteAtEnd()
{
	if (checkIfEmpty())
	{
		cout << "List is Empty" << endl;
		return;
	}
	Node* ptr1 = head, * ptr2 = head;
	while (ptr1->getNext() != nullptr)
	{
		ptr2 = ptr1;
		ptr1 = ptr1->getNext();
	}
	ptr2->setNext(nullptr);
	delete ptr1;
}
void LinkedList::deleteAtPosition(int pos)
{
	if (checkIfEmpty())
	{
		cout << "List is Empty" << endl;
		return;
	}
	int p = 1;
	Node* ptr1 = head->getNext(), * ptr2 = head;
	while (ptr1 != nullptr && p!=pos-1)
	{
		ptr2 = ptr1;
		ptr1 = ptr1->getNext();
		p++;
	}
	if (p != pos - 1)
		return;
	ptr2->setNext(ptr1->getNext());

	delete ptr1;
}

void LinkedList::deleteAnElement(Node* target)
{
	if (target == head)
	{
		deleteAtBeginning();
		return;
	}
	Node* ptr = head, *temp=nullptr;
	while (ptr != nullptr)
	{
		if (ptr->getNext() == target)
		{
			temp = ptr->getNext();
			ptr->setNext(temp->getNext());
			delete temp;
			return;
		}
		ptr = ptr->getNext();
	}
}

void LinkedList::displayList()
{
	if (checkIfEmpty())
	{
		cout << "List is Empty" << endl;
		return;
	}
	Node* ptr = head;
	cout << "Linked List: ";
	while (ptr->getNext()!=nullptr)
	{
		cout << ptr->getData() << "-->";
		ptr = ptr->getNext();
	}
	cout << ptr->getData();
}

Node* LinkedList::searchList(int key)
{
	if (checkIfEmpty())
	{
		cout << "List is Empty" << endl;
		return nullptr;
	}
	cout << "Searching....." << endl;
	Node* ptr = head;
	while (ptr != nullptr)
	{
		if (ptr->getData() == key)
			return ptr;
		ptr = ptr->getNext();
	}
	return nullptr;
}
void LinkedList::updateList(Node* ptr, int val)
{
	if (checkIfEmpty())
	{
		cout << "List is Empty" << endl;
		return;
	}
	if (ptr == nullptr)
		return;
	ptr->setData(val);
}