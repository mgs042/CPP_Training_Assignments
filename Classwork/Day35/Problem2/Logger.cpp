#include<Logger.h>
#include<iostream>
using namespace std;

enum logLevel
{
	INFO=0,
	DEBUG,
	WARNING,
	ERROR
};
Logger::Logger(const char* filename)
{
	try
	{
		logFile.open(filename, ios::app);
		if (!logFile.is_open())
			throw "Log File cannot be opened.";
	}
	catch (const char* s)
	{
		cout << "Error: " << s << endl;
		exit(0);
	}
}

const char* Logger::levelToString(int l)
{
	switch (l)
	{
	default:
		return "UNKNOWN";
		break;
	case INFO:
		return "INFO";
		break;
	case DEBUG:
		return "DEBUG";
		break;
	case WARNING:
		return "WARNING";
		break;
	case ERROR:
		return "ERROR";
		break;

	}
}

void Logger::log(int level, const char* message)
{
	logFile << "[" << levelToString(level) << "] " << message << endl;
}

Logger::~Logger()
{
	logFile.close();
}