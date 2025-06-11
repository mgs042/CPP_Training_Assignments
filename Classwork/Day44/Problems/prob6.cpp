#include<iostream>
#include<thread>
#include<mutex>

std::mutex mtx;

void oddEven(bool flag)
{
	for (static int i = 1; i <= 20;)
	{
		std::lock_guard<std::mutex> lock(mtx);
		if (i == 21)
			break;
		if (flag == true && i%2==0)
		{
			std::cout << i << " ";
			i++;
		}
		else if (flag == false && i % 2 != 0)
		{
			std::cout << i << " ";
			i++;
		}
	}
}

int main()
{
	std::thread t1(oddEven, true);
	std::thread t2(oddEven, false);
	if (t1.joinable())
		t1.join();
	if (t2.joinable())
		t2.join();
	return 0;
}