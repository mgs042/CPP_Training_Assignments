#include<iostream>
#include<thread>
#include<mutex>
#include<string>

class Counter
{
	int x;
	std::mutex mtx;
public:
	Counter() : x(0) {}
	void increment(const std::string tName)
	{
		for(int i=0; i<10; ++i)
		{
			std::lock_guard<std::mutex> lock(mtx);
			x += 2;
			std::cout << tName << " incremented x to " << x << std::endl;
		}
	}

	int getX()
	{
		return x;
	}
};

int main()
{
	Counter c;
	std::thread t1(&Counter::increment, &c, "Thread 1");
	std::thread t2(&Counter::increment, &c, "Thread 2");
	t1.join();
	t2.join();
	return 0;

}