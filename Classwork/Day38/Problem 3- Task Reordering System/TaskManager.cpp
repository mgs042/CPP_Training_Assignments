#include<TaskManager.h>
#include<iostream>
using namespace std;

bool TaskManager::promotionCheck(string s)
{
	return s.find("critical") != string::npos;
}

void TaskManager::add(string task)
{
	if (promotionCheck(task))
	{
		urgent(task);
		return;
	}
	taskList.push_back(task);
}

void TaskManager::urgent(string task)
{
	taskList.push_front(task);
}

void TaskManager::remove(string key)
{
	taskList.remove(key);
}

void TaskManager::show()
{
	auto i = taskList.begin();

	for (; next(i,1) != taskList.end(); advance(i, 1))
	{
		cout << *i << "-->";
	}
	cout << *i << endl;
}