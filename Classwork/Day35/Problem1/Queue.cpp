#include<Queue.h>
#include<Job.h>
#include<iostream>
#include<fstream>
#include<algorithm>
#include<string>
using namespace std;

struct Compare
{
	bool operator()(Job ob1, Job ob2) const 
	{ 
		return ob1.getPriority() < ob2.getPriority(); 
	}
};

Queue::Queue(const char* filename)
{
	Job ob;
	int val;
	ifstream file;
	try
	{
		file.open(filename, ios::in);
		if (file.is_open())
			throw "File cannot be opened";
	}
	catch (string s)
	{
		cout << s << endl;
		exit(0);
	}
	while (!file.eof())
	{
		file >> val;
		ob.setJobId(val);
		file >> val;
		ob.setExecutionTime(val);
		file >> val;
		ob.setPriority(val);
	}
	file.close();
	totalTime = 0;
}

void Queue::sortPriority()
{
	sort(jobQueue.begin(), jobQueue.end(), Compare());
}

void Queue::executeQueue()
{
	for (auto i : jobQueue)
	{
		totalTime += i.executeJob();
	}
}

int Queue::getTotalTime()
{
	return totalTime;
}