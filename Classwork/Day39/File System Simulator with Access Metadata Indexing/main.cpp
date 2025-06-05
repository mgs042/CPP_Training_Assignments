#include<iostream>
#include<FileManager.h>
using namespace std;

int main()
{
	FileManager ob;
	string s = "", temp, name, user, accessType;
	int id;
	while (s != "exit")
	{
		getline(cin, s);
		if (s.find("ADD ") != string::npos)
		{
			temp = s.substr(4);
			size_t start = 0, end;
			end = temp.find(' ', start);
			id = stoi(temp.substr(start, end - start));
			start = end + 1;
			end = temp.find(' ', start);
			name = temp.substr(start, end - start);
			start = end + 1;
			end = temp.find(' ', start);
			user = temp.substr(start, end - start);
			ob.addFile(id, name, user);
		}
		else if (s.find("ACCESS ") != string::npos)
		{
			temp = s.substr(7);
			size_t start = 0, end;
			end = temp.find(' ', start);
			id = stoi(temp.substr(start, end - start));
			start = end + 1;
			end = temp.find(' ', start);
			accessType = temp.substr(start, end - start);
			start = end + 1;
			end = temp.find(' ', start);
			user = temp.substr(start, end - start);
			ob.accessFile(id, accessType, user);
		}
		else if (s.find("DELETE ") != string::npos)
		{
			temp = s.substr(7);
			ob.deleteFile(stoi(temp));
		}
		else if (s.find("SHOW_ACCESS_FREQ ") != string::npos)
		{
			temp = s.substr(17);
			ob.displayFrequency(stoi(temp));
			cout << endl;
		}
		else if (s.find("LIST_BY_USER ") != string::npos)
		{
			temp = s.substr(13);
			ob.listFilesUser(temp);
			cout << endl;
		}
		else if (s == "LIST_ALL")
		{
			ob.listAll();
			cout << endl;
		}
		else if (s == "LIST_RECENT")
		{
			ob.listRecent();
			cout << endl;
		}
	}
}