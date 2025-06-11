#include<iostream>
#include<thread>
#include<mutex>

std::mutex m;
void addMon(int& x)
{
	m.lock();
	x += 50;
	std::cout << "Add: " << x << std::endl;
	m.unlock();
}

void subMon(int& x)
{
	std::this_thread::sleep_for(std::chrono::milliseconds(3));
	m.lock();
	x -= 100;
	std::cout << "Sub: " << x << std::endl;
	m.unlock();
}

int main()
{
	int val = 200;
	std::thread t1(addMon, std::ref(val));
	std::thread t2(addMon, std::ref(val));
	t1.join();
	t2.join();
	return 0;

}