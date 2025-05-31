#include<iostream>
using namespace std;

template<typename T1, typename T2>
class Box
{
	T1 val1;
	T2 val2;
public:
	Box(T1 v1, T2 v2) :val1(v1), val2(v2) {}
	void show()
	{
		cout << "Value1: " << val1 << endl;
		cout << "Value2: " << val2 << endl;
	}
};

int main()
{
	char c[] = { 'a','b','c', '\0'};
	Box<int, char *> b(10, c);
	b.show();
	return 0;
}