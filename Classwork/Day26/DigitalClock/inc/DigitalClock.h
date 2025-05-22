#pragma once
class DigitalClock
{
	int hours, minutes, seconds;
	void nextHour();
	void nextMinute();
public:
	void start();
	void tick();
	void display();
};