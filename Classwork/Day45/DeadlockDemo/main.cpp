#include<iostream>
#include<thread>
#include<mutex>

std::mutex mtx1;
std::mutex mtx2;

void thread1()
{
	std::lock_guard<std::mutex> lock1(mtx1);
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::lock_guard<std::mutex> lock2(mtx2);
	std::cout << "Thread 1 is over" << std::endl;
}

void thread2()
{
	std::lock_guard<std::mutex> lock2(mtx2);
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::lock_guard<std::mutex> lock1(mtx1);
	std::cout << "Thread 2 is over" << std::endl;
}

int main()
{
	std::thread t1(thread1);
	std::thread t2(thread2);
	if (t1.joinable())
		t1.join();
	if (t2.joinable())
		t2.join();
	return 0;
}