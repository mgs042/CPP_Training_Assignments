#include<iostream>
#include<thread>
#include<mutex>

std::mutex mtx;
void dispLetter(char c)
{
	static int count = 0;
	for (int i = 0; i < 5;)
	{
		mtx.lock();
		if (count % 3 == 0 && c == 'A')
		{
			std::cout << c;
			++i;
			count++;
		}
		else if (count % 3 == 1 && c == 'B')
		{
			std::cout << c;
			++i;
			count++;
		}
		else if (count % 3 == 2 && c == 'C')
		{
			std::cout << c;
			++i;
			count++;
		}
		mtx.unlock();
	}
}

int main()
{
	std::thread t1(dispLetter, 'A');
	std::thread t2(dispLetter, 'B');
	std::thread t3(dispLetter, 'C');
	t1.join();
	t2.join();
	t3.join();
	return 0;
}