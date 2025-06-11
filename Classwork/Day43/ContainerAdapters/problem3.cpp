//3. Task Priority Scheduler (Priority Queue)

#include<iostream>
#include<queue>
#include<string>
#include<fstream>

class task
{
	std::string desc;
	int priority;
public:
	task(std::string d, int p) :desc(d), priority(p) {}
	bool operator<(const task& other) const
	{
		return this->priority < other.priority;
	}
	std::string getDesc() { return desc; }
	int getPriority() { return priority; }
};

int main()
{
	std::priority_queue<task> taskQ;
	std::string line;
	std::ifstream fIn;
	fIn.open("prob3.txt", std::ios::in);
	size_t pos;
	while (getline(fIn, line))
	{
		pos = line.find(' ');
		taskQ.emplace(task(line.substr(0, pos), stoi(line.substr(pos + 1))));
	}
	task t("", 0);
	while (!taskQ.empty())
	{
		t = taskQ.top();
		std::cout << "Execute: " << t.getDesc() << " with priority " << t.getPriority() << std::endl;
		taskQ.pop();
	}
}