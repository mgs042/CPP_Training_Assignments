#include<iostream>
#include<LinkedList.h>
#include<Node.h>
using namespace std;

int displayMenu();

int main()
{
	int choice, val, pos;
	Node* ptr;
	LinkedList list;
	while (1)
	{
		choice = displayMenu();
		switch (choice)
		{
		default:
			cout << endl << "Invalid Option" << endl;
			break;
		case 1:
			cout << endl << "Insert At Beginning" << endl;
			cout << "Enter a value: ";
			cin >> val;
			list.insertAtBeginning(val);
			break;
		case 2:
			cout << endl << "Insert At End" << endl << endl;
			cout << "Enter a value: ";
			cin >> val;
			list.insertAtEnd(val);
			break;
		case 3:
			cout << endl << "Insert At Position" << endl << endl;
			cout << "Enter a value: ";
			cin >> val;
			cout << "Enter the position to be inserted: ";
			cin >> pos;
			list.insertAtPosition(val, pos);
			break;
		case 4:
			cout << endl << "Delete At Beginning" << endl << endl;
			list.deleteAtBeginning();
			break;
		case 5:
			cout << endl << "Delete At End" << endl << endl;
			list.deleteAtEnd();
			break;
		case 6:
			cout << endl << "Delete At Position" << endl << endl;
			cout << "Enter the position to be deleted: ";
			cin >> pos;
			list.deleteAtPosition(pos);
			break;
		case 7:
			cout << endl << "Search for Value" << endl;
			cout << "Enter a value to be searched for: ";
			cin >> val;
			ptr = list.searchList(val);
			cout << "Node data: " << ptr->getData() << endl;
			cout << "Node next: " << ptr->getNext() << endl;
			cout << "Node address: " << (unsigned long int) & ptr << endl;
			break;
		case 8:
			cout << endl << "Update the List" << endl << endl;
			cout << "Enter a value to be updated: ";
			cin >> pos;
			cout << "Enter the new value: ";
			cin >> val;
			list.updateList(list.searchList(pos), val);
			break;
		case 9:
			cout << endl << "Display the List" << endl << endl;
			list.displayList();
			break;
		case 10:
			cout << endl << "Exit" << endl << endl;
			exit(0);
			break;
		}
	}
	return 0;
}


int displayMenu()
{
	int choice;
	cout << endl;
	cout << "\tMenu" << endl;
	cout << "\t~~~~" << endl;
	cout << "1. Insert at Beginning" << endl;
	cout << "2. Insert at End" << endl;
	cout << "3. Insert at Position" << endl;
	cout << "4. Delete at Beginning" << endl;
	cout << "5. Delete at End" << endl;
	cout << "6. Delete at Position" << endl;
	cout << "7. Search List" << endl;
	cout << "8. Update List" << endl;
	cout << "9. Display List" << endl;
	cout<<"10. Exit"<<endl;
	cout << endl << "Enter your choice [1-10]: ";
	cin >> choice;
	return choice;
}
