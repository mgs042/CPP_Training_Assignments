#include<iostream>
#include<set>
using namespace std;

int main()
{
	multiset<int> scores;
	string s = "";
	int val;
	while (s != "exit")
	{
		if (s.find("ADD ") != string::npos)
			scores.insert(atoi(s.substr(4).c_str()));
		else if (s == "TOP3")
		{
			auto pos = scores.rbegin();
			for (int i = 0; i < 3; ++i)
			{
				if (*pos != val)
				{
					val = *pos;
					cout << val << " ";
				}
				pos = prev(pos - 1);
			}
		}
		else if (s.find("COUNT ") != string::npos)
			scores.count(atoi(s.substr(6).c_str()));
		else if (s.find("REMOVE ") != string::npos)
		{
			for (auto i : scores)
			{
				if (i == atoi(s.substr(7).c_str()))
				{

				}
			}
		}
	}
}
