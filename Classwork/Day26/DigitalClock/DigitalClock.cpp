#include<DigitalClock.h>
#include<iostream>
using namespace std;
void DigitalClock::nextHour()
{
	minutes = 0;
	hours++;
}

void DigitalClock::nextMinute()
{
	seconds = 0;
	minutes++;
	if (minutes == 60)
	{
		nextHour();
	}
}

void DigitalClock::tick()
{
	seconds++;
	if (seconds == 60)
	{
		nextMinute();
	}
}

void DigitalClock::start()
{
	hours = 0;
	minutes = 0;
	seconds = 0;
}

void DigitalClock::display()
{
	cout << "Hour: " << hours << " Min: " << minutes << " Sec: " << seconds << endl;
}