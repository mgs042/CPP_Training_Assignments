#include<iostream>
#include<DigitalClock.h>
using namespace std;

int main()
{
	DigitalClock clock;
	clock.start();
	for (int i = 0; i < 7200; ++i)
	{
		clock.display();
		clock.tick();
	}
	return 0;
}