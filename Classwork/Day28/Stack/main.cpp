#include<iostream>
using namespace std;

#define MAX 100

bool push(int[], int&, int);
int pop(int[], int&);

int main()
{
	int top = -1, size, temp;
	int stack[MAX];
	cout << "Enter the size of stack: ";
	cin >> size;
	for (int i = 0; i < size; ++i)
	{
		cout << "Enter the Element" << i + 1 << ": ";
		cin >> temp;
		if (!push(stack, top, temp))
			break;
	}
	cout << endl << "------Stack Elements Are------" << endl;
	while (top != -1)
	{
		cout << pop(stack, top) << endl;
	}
	return 0;
}


bool push(int s[], int& t, int val)
{
	if (t == MAX - 1)
	{
		cout << "Stack is full" << endl;
		return false;
	}
	else
	{
		s[++t] = val;
		return true;
	}
}

int pop(int s[], int& t)
{
	if (t == -1)
	{
		cout << "Stack is Empty" << endl;
		return -1;
	}
	else
		return s[t--];

}