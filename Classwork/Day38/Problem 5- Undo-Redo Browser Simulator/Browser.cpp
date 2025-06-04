#include<Browser.h>
#include<iostream>
using namespace std;

void Browser::visit(string site)
{
	backwardHistory.push_back(currentPage);
	currentPage = site;
	forwardHistory.clear();
	cout << "Visited: " << site << endl;
}

void Browser::back()
{
	if (backwardHistory.empty())
	{
		cout << "No backward history" << endl;
		return;
	}
	forwardHistory.push_front(currentPage);
	currentPage = backwardHistory.back();
	backwardHistory.pop_back();
	cout << "Back to: " << currentPage << endl;
}

void Browser::forward()
{
	if (forwardHistory.empty())
	{
		cout << "No forward history" << endl;
		return;
	}
	backwardHistory.push_back(currentPage);
	currentPage = forwardHistory.front();
	forwardHistory.pop_front();
	cout << "Forward to: " << currentPage << endl;
}

void Browser::current()
{
	cout << "Current Page: " << currentPage << endl;
}

void Browser::history()
{
	cout << "Back Stack: ";
	for (auto i : backwardHistory)
		cout << i << "<--";
	cout << endl;
	cout << "Current: " << currentPage << endl;
	cout << "Forward Stack: ";
	for (auto i : forwardHistory)
		cout << "-->" << i;
	cout << endl;
}
