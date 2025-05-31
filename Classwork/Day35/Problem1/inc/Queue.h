#pragma once
#include<vector>
#include<Job.h>
using namespace std;
class Queue
{
private:
	vector<Job> jobQueue;
	static int totalTime;
public:
	Queue(const char*);
	void sortPriority();
	void executeQueue();
	static int getTotalTime();
};