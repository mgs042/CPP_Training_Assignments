//1. Browser History Navigation (Stack)
#include<iostream>
#include<stack>
#include<string>
#include<fstream>

class BrowserHistory
{
	std::stack<std::string> frontButton;
	std::stack<std::string> backButton;
	std::string currentPage;
	void dispCurrentPage()
	{
		std::cout << "Current Page: " << currentPage << std::endl;
	}
public:
	BrowserHistory()
	{
		currentPage = "";
	}

	void visit(std::string s)
	{
		backButton.push(currentPage);
		while (!frontButton.empty())
			frontButton.pop();
		currentPage = s;
		dispCurrentPage();
	}

	void back()
	{
		if (backButton.empty())
		{
			std::cout << "No pages in the back stack" << std::endl;
			dispCurrentPage();
			return;
		}
		frontButton.push(currentPage);
		currentPage = backButton.top();
		backButton.pop();
		dispCurrentPage();
	}

	void front()
	{
		if (frontButton.empty())
		{
			std::cout << "No pages in the front stack" << std::endl;
			dispCurrentPage();
			return;
		}
		backButton.push(currentPage);
		currentPage = frontButton.top();
		frontButton.pop();
		dispCurrentPage();
	}
};

int main()
{
	std::string line;
	std::ifstream fIn;
	BrowserHistory ob;
	fIn.open("prob1.txt", std::ios::in);
	while (getline(fIn, line))
	{
		if (line == "forward")
			ob.front();
		else if (line == "back")
			ob.back();
		else if (line.substr(0, 5) == "visit")
			ob.visit(line.substr(6));
	}
}

