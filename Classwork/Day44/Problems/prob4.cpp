#include<iostream>
#include<thread>
#include<mutex>


std::mutex m;
void pingPong(bool flag)
{
	static bool pp = false;
	for (int i = 0; i < 10;)
	{
			m.lock();
			if (flag == true && pp == false)
			{
				std::cout << "Ping" << std::endl;
				i++;
				pp = true;
			}
			else if (flag == false && pp == true)
			{
				std::cout << "Pong" << std::endl;
				pp = false;
				i++;
			}
			m.unlock();
		//std::this_thread::sleep_for(std::chrono::seconds(4));
	}
}

int main()
{
	std::thread t1(pingPong, true);
	std::thread t2(pingPong, false);
	t1.join();
	t2.join();
	return 0;
}