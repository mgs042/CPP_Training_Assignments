#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char a;
	fstream fin;
	fin.open("sample.txt", ios::in);
	if (!fin.is_open())
	{
		cout << "File cannot be opened" << endl;
		return 0;
	}
	fin.seekg(5, ios::beg);
	fin.get(a);
	cout << a << endl;
}