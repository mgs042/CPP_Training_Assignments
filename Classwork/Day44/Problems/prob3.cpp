#include<iostream>
#include<thread>
#include<mutex>


std::mutex m;
void incrementCounter()
{
	static int count = 0;
	for (int i = 0; i < 1000; ++i)
	{
		m.lock();
		std::cout << count++ << std::endl;
		m.unlock();
	}
	std::cout << count << std::endl;
}

int main()
{
	std::thread t1(incrementCounter);
	std::thread t2(incrementCounter);
	std::thread t3(incrementCounter);
	std::thread t4(incrementCounter);
	t1.join();
	t2.join();
	t3.join();
	t4.join();
	return 0;
}