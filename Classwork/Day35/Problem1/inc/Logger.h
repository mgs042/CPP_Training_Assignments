#pragma once
#include<fstream>
#include<string>
using namespace std;
using namespace std;
class Logger
{
	ofstream logFile;
public:
	Logger(const char*);
	string levelToString(int);
	void log(int, string);
};