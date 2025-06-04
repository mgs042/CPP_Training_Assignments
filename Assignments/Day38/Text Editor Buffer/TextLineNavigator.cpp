#include<TextLineNavigator.h>
#include<iostream>
using namespace std;

TextLineNavigator::TextLineNavigator()
{
	this->cursorPos = 0;
}

auto TextLineNavigator::navigateToLine()
{
	auto pos = textLines.begin();
	pos = next(pos, cursorPos);
	return pos;
}
void TextLineNavigator::insertLine(string line)
{
	auto pos = navigateToLine();
	textLines.insert(pos, line);
	cursorPos++;
}
void TextLineNavigator::navigateUp()
{
	cursorPos--;
}
void TextLineNavigator::navigateDown()
{
	cursorPos++;
}
void TextLineNavigator::printLines()
{
	for (string line : textLines)
		cout << line << endl;
}

