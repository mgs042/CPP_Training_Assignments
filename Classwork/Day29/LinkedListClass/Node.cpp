#include<Node.h>
Node::Node()
{
	data = 0;
	next = nullptr;
}
Node::Node(int val, Node* ptr)
{
	data = val;
	next = ptr;
}
void Node::setData(int val)
{
	data = val;
}
void Node::setNext(Node* ptr)
{
	next = ptr;
}
int Node::getData()
{
	return data;
}
Node* Node::getNext()
{
	return next;
}