#pragma once

#include<fstream>
using namespace std;
class Logger
{
	ofstream logFile;
	const char* levelToString(int);
public:
	Logger(const char*);
	void log(int level, char const*);
	~Logger();
};