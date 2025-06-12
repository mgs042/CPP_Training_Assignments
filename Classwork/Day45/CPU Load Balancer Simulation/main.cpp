#include<iostream>
#include<thread>
#include<mutex>
#include<string>
#include<queue>
#include<vector>
#include<fstream>

class Task
{
	std::string name;
	int load;
public:
	Task(std::string n, int l) :name(n), load(l) {}
	std::string getName() { return name; }
	int getLoad() { return load; }
	void execute() { std::this_thread::sleep_for(std::chrono::seconds(load)); }
};

std::mutex mtx;

class TaskQueue
{
	std::queue<Task> taskList;
public:
	void executeTasks(int cpu)
	{
		while (!taskList.empty())
		{
			std::unique_lock<std::mutex> lock(mtx);
			if (taskList.empty()) { break; }
			Task t = taskList.front();
			taskList.pop();
			std::cout << "CPU-" << cpu << " picked Task " << t.getName() << " (Load: " << t.getLoad() << ")" << std::endl;
			lock.unlock();
			t.execute();
			lock.lock();
			std::cout << "CPU-" << cpu << " finished Task " << t.getName() << std::endl;
			lock.unlock();

		}
	}

	void readTasks(std::ifstream& fIn)
	{
		
		std::string line, tName;
		int l;
		size_t pos1, pos2;
		while (getline(fIn, line))
		{
			pos1 = line.find(':');
			tName = line.substr(0, pos1);
			pos2 = pos1 + 2;
			pos1 = line.find(' ', pos2);
			l = stoi(line.substr(pos1 + 1));
			taskList.emplace(Task(tName, l));
		}
		
	}

	int readCPU(std::ifstream& fIn)
	{
		std::string line;
		getline(fIn, line);
		size_t pos = line.find(':') + 2;
		return stoi(line.substr(pos));
	}

	std::queue<Task> &getQueue(){ return taskList; }
};

int main()
{
	std::ifstream fileIn;
	fileIn.open("input.txt", std::ios::in);
	TaskQueue ob;
	int c = ob.readCPU(fileIn);
	ob.readTasks(fileIn);
	/*while (!tList.empty())
	{
		std::cout << tList.front().getName() << std::endl;
		tList.pop();
	}*/


	std::vector<std::thread> threadList;
	for (int i = 1; i <= c; ++i)
		threadList.emplace_back(std::thread(&TaskQueue::executeTasks, &ob, i));
	for (auto& t : threadList)
	{
		if (t.joinable())
			t.join();
	}
	return 0;
}