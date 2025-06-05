#include<iostream>
#include<set>
#include<string>
using namespace std;

int main()
{
	multiset<int> scores;
	string s = "";
	int val=-1;
	while (s != "exit")
	{
		getline(cin, s);
		if (s.find("ADD ") != string::npos)
			scores.insert(atoi(s.substr(4).c_str()));
		else if (s == "TOP3")
		{
			auto pos = scores.rbegin();
			for (int i = 0; i < 3 && pos != scores.rend(); ++i)
			{
				if (*pos != val)
				{
					val = *pos;
					cout << val << " ";
					i--;
				}
				pos++;
			}
			cout << endl;
		}
		else if (s.find("COUNT ") != string::npos)
			cout << scores.count(atoi(s.substr(6).c_str())) << endl;
		else if (s.find("REMOVE ") != string::npos)
		{
			scores.erase(atoi(s.substr(7).c_str()));
		}
	}
}
