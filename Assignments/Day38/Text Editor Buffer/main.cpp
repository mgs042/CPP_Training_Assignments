#include<iostream>
#include<TextLineNavigator.h>
using namespace std;

int main()
{
	TextLineNavigator note;
	string s = "";
	while (s != "exit")
	{
		getline(cin, s);
		if (s.find("INSERT ") != string::npos)
			note.insertLine(s.substr(7));
		else if (s == "UP")
			note.navigateUp();
		else if (s == "DOWN")
			note.navigateDown();
		else if (s == "PRINT")
			note.printLines();
		else if (s == "exit")
			break;
	}
	return 0;
}