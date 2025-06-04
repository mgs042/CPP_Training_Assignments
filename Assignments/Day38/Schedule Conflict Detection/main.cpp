#include<iostream>
#include<string>
#include<set>
using namespace std;

int main()
{
	set<int> slots;
	string s = "";
	while (s != "exit")
	{
		getline(cin, s);
		if (s.find("BOOK ") != string::npos)
		{
			if (slots.count(atoi(s.substr(5).c_str())) > 0)
				cout << "Already Booked" << endl;
			else
			{
				slots.insert(atoi(s.substr(5).c_str()));
				cout << "Booked: " << s.substr(5) << endl;
			}
		}
		else if (s.find("CHECK ") != string::npos)
		{
			if (slots.count(atoi(s.substr(6).c_str())) > 0)
				cout << "Already Booked" << endl;
			else
				cout << "Free" << endl;
		}
	}
	return 0;
}