#include<iostream>
#include<thread>

void backgroundTask(int &x)
{
	//std::this_thread::sleep_for(std::chrono::seconds(3));
	std::cout << "Background task done" << std::endl;
	x = 20;
}

int main()
{
	int val = 10;
	std::cout << "Original Value: " << val << std::endl;
	std::thread t(backgroundTask, std::ref(val));
	t.detach();
	std::this_thread::sleep_for(std::chrono::seconds(5));
	std::cout << "Modfied Value: " << val << std::endl;
	std::cout << "Main not blocked" << std::endl;
	return 0;
}