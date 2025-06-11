//2. Print Job Scheduling (Queue)
#include<iostream>
#include<queue>
#include<string>
#include<utility>
#include<fstream>

class PrintQueue
{
	std::queue<std::pair<std::string, int>> printQ;
public:
	void printProcess(std::string user, int pages)
	{
		if (pages <= 10)
			printQ.push({ user, pages });
		else
		{
			for(int i=0; i<pages/10; ++i)
				printQ.push({ user, 10 });
			printQ.push({ user, pages%10 });
		}
	}
	void printFromQ()
	{
		while (!printQ.empty())
		{
			std::pair<std::string, int> p = printQ.front();
			std::cout << "Processing: " << p.first << " " << p.second << " pages" << std::endl;
			printQ.pop();
		}
	}
};


int main()
{
	std::string line;
	std::ifstream fIn;
	PrintQueue ob;
	fIn.open("prob2.txt", std::ios::in);
	size_t pos1;
	while (getline(fIn, line))
	{
		pos1 = line.find(' ');
		ob.printProcess(line.substr(0, pos1), stoi(line.substr(pos1 + 1)));
	}
	ob.printFromQ();
	return 0;
}