#include<iostream>
#include<string>
#include<forward_list>
using namespace std;

void insertLogs(forward_list<string>& logs, string log)
{
	static int count = 0;
	logs.push_front(log);
	count++;
	if (count > 3)
		logs.resize(3);
}

void displayLogs(const forward_list<string>& logs)
{
	for (auto i : logs)
		cout << i << endl;
}

int main()
{
	forward_list<string> logs;
	insertLogs(logs, "Log A");
	insertLogs(logs, "Log B");
	insertLogs(logs, "Log C");
	insertLogs(logs, "Log D");
	insertLogs(logs, "Log E");
	displayLogs(logs);
}