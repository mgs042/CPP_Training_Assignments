#include<Browser.h>
#include<iostream>
#include<string>
using namespace std;

int main()
{
	Browser b;
	string s = "";
	while (s != "exit")
	{
		cout << "Enter the command: ";
		getline(cin, s);
		if (s.find("visit ") != string::npos)
			b.visit(s.substr(6));
		else if (s == "back")
			b.back();
		else if (s == "forward")
			b.forward();
		else if (s == "current")
			b.current();
		else if (s == "history")
			b.history();
		cout << endl;
	}
	return 0;
}