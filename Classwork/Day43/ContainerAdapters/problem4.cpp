//4. Balanced Parentheses Checker (Stack)

#include<iostream>
#include<map>
#include<stack>
#include<string>
#include<fstream>

int main()
{
	std::map<char, char> brackets = { {'(',')'}, { '{','}' }, {'[',']'} };

	std::stack<char> check;
	std::string line;
	std::fstream fIn;
	fIn.open("prob4.txt", std::ios::in);
	bool flag;
	while (getline(fIn, line))
	{
		flag = true;
		for (char i : line)
		{
			if(brackets.find(i)!=brackets.end())
				check.push(i);
			else if (brackets[check.top()] == i)
				check.pop();
			else
			{
				flag = false;
				break;
			}
		}
		if (flag)
			std::cout << "Balanced" << std::endl;
		else
			std::cout << "Not Balanced" << std::endl;
	}
	return 0;
}