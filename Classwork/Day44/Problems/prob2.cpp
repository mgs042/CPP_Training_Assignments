#include<iostream>
#include<thread>

void dispOddEven(int n, bool flag)
{
	for (int i = 1; i <= n; ++i)
	{
		if (flag == true && i%2 == 0)
		{
			std::cout << "Even: " << i << std::endl;
		}
		else if(flag == false && i % 2 != 0)
		{
			std::cout << "Odd: " << i << std::endl;
		}
	}
}

int main()
{
	std::thread t1(dispOddEven, 10, true);
	std::thread t2(dispOddEven, 10, false);
	t1.join();
	t2.join();
	return 0;
}