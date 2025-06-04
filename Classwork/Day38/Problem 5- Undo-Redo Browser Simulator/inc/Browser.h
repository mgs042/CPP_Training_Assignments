#pragma once

#include<deque>
#include<string>
using namespace std;

class Browser
{
	deque<string> forwardHistory;
	deque<string> backwardHistory;
	string currentPage;
public:
	void visit(string);
	void back();
	void forward();
	void current();
	void history();
};