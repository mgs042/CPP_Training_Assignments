#include<iostream>
#include<forward_list>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	forward_list<string> chats = { "Hi", "Hello", "DELETED: Spam", "How are you?", "DELETED: Abuse" };
	auto j = chats.begin();
	for (auto i = chats.begin(); i != chats.end(); advance(i, 1))
	{
		if ((*i).find("DELETED: ") != string::npos)
		{
			chats.erase_after(j);
			i = j;
			continue;
		}
		j = i;
	}
	for (auto i : chats)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}