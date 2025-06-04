#pragma once

#include<string>
#include<list>
using namespace std;

class TextLineNavigator
{
	list<string> textLines;
	int cursorPos;
	auto navigateToLine();
public:
	TextLineNavigator();
	void insertLine(string);
	void navigateUp();
	void navigateDown();
	void printLines();
};