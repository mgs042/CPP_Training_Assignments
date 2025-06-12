#include<iostream>
#include<thread>
#include<mutex>

std::mutex mtx;
bool alreadyPing = false;
std::condition_variable cv;

void pong()
{
	for (int i = 0; i < 10; ++i)
	{
		std::unique_lock<std::mutex> lock(mtx);
		cv.wait(lock, [] {return alreadyPing;});
		std::cout << "Pong" << std::endl;
		alreadyPing = false;
		cv.notify_one();
	}
}

void ping()
{
	for (int i = 0; i < 10; ++i)
	{
		std::unique_lock<std::mutex> lock(mtx);
		cv.wait(lock, [] {return !alreadyPing;});
		std::cout << "Ping" << std::endl;
		alreadyPing = true;
		cv.notify_one();
	}
}

int main()
{
	std::thread t1(ping);
	std::thread t2(pong);
	if (t1.joinable())
		t1.join();
	if (t2.joinable())
		t2.join();
	return 0;
}
