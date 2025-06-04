#pragma once

#include<list>
#include<string>
using namespace std;

class TaskManager
{
	list<string> taskList;
	bool promotionCheck(string);
public:
	void add(string);
	void urgent(string);
	void remove(string);
	void show();
};