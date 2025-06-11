#include<iostream>
#include<thread>

void firstTen()
{
	for (int i = 1; i <= 10; ++i)
		std::cout << i << std::endl;
}

void nextTen()
{
	std::this_thread::sleep_for(std::chrono::milliseconds(3));
	for (int i = 11; i <= 20; ++i)
		std::cout << i << std::endl;
}

int main()
{
	std::thread t1(firstTen);
	std::thread t2(nextTen);
	t1.join();
	t2.join();
	return 0;
}