#include<iostream>
using namespace std;

typedef struct Node
{
	int data;
	struct Node* next;	//Self-referential Pointer;
}NODE;

NODE* allocateMemeory(int, NODE*);
void insertAtEnd(NODE*, NODE*&);
void insertAtPosition(NODE*, int, NODE*&);
void insertAtBeginning(NODE*, NODE*&);
void traverse(NODE*);
int menu();

int main()
{
	NODE* head = nullptr, * ptr = nullptr;
	int choice, val, pos;
	while (1)
	{
		choice = menu();
		switch (choice)
		{
		default:
			cout << "Invalid Choice" << endl;
			break;
		case 1:
			cout << "Enter the value of the node: ";
			cin >> val;
			ptr = allocateMemeory(val, nullptr);
			insertAtEnd(ptr, head);
			break;
		case 2:
			cout << "Enter the value of the node: ";
			cin >> val;
			cout << "Enter the position: ";
			cin >> pos;
			ptr = allocateMemeory(val, nullptr);
			insertAtPosition(ptr, pos, head);
			break;
		case 3:
			cout << "Enter the value of the node: ";
			cin >> val;
			ptr = allocateMemeory(val, head);
			insertAtBeginning(ptr, head);
			break;
		case 4:
			traverse(head);
			break;
		case 5:
			exit(0);
			break;
		}
	}
	return 0;
}

int menu()
{
	int choice;
	cout << endl;
	cout << "\t\tMenu" << endl;
	cout << "\t\t~~~~" << endl;
	cout << "1. Insert At End" << endl;
	cout << "2. Insert At Position" << endl;
	cout << "3. Insert At Beginning" << endl;
	cout << "4. Traverse" << endl;
	cout << "5. Exit" << endl;
	cout << endl << "Enter your choice: ";
	cin >> choice;
	return choice;
}

void insertAtEnd(NODE* n, NODE* &head)
{
	if (head == nullptr)
	{
		head = n;
		return;
	}
	NODE* ptr = head;
	while (ptr->next != nullptr)
		ptr = ptr->next;
	ptr->next = n;
}


void insertAtPosition(NODE *n, int pos, NODE*& head)
{
	int p = 1;
	if (pos == 1)
	{
		n->next = head;
		head = n;
		return;
	}
	NODE* ptr = head;
	while (p != pos-1 && ptr != nullptr)
	{
		ptr = ptr->next;
		p++;
	}
	if (ptr == nullptr)
		return;
	n->next = ptr->next;
	ptr->next = n;
}

void insertAtBeginning(NODE* n, NODE*& head)
{
	head = n;
}

void traverse(NODE* head)
{
	NODE* ptr = head;
	cout << "Linked List: ";
	while (ptr->next != nullptr)
	{
		//cout << "[" << (unsigned long int)ptr << " | " << ptr->data << " | " << (unsigned long int)ptr->next << "]" << "-->";
		cout << ptr->data << " -->";
		ptr = ptr->next;
	}
	//cout << "[" << (unsigned long int)ptr << " | " << ptr->data << " | " << (unsigned long int)ptr->next << "]" << endl;
	cout << ptr->data << endl;
}

NODE* allocateMemeory(int val, NODE* ptr)
{
	NODE* n = (NODE*)malloc(sizeof(NODE));
	n->data = val;
	n->next = ptr;
	return n;
}