#include<iostream>
#include<TaskManager.h>
#include<string>
using namespace std;

int main()
{
	string s;
	TaskManager ob;
	while (s != "exit")
	{
		cout << "Enter command: ";
		getline(cin, s);
		if (s.find("add")!=string::npos)
			ob.add(s.substr(4));
		else if (s.find("urgent") != string::npos)
			ob.urgent(s.substr(7));
		else if (s.find("remove") != string::npos)
			ob.remove(s.substr(7));
		else if (s=="show")
			ob.show();
	}
}