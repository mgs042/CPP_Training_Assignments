#include<iostream>
#include<vector>

int main()
{

	auto oddNum = [](int n) { std::vector<int> oddNos; for (int i = 1; i <= n; ++i) { if (i % 2 != 0) oddNos.push_back(i); } return oddNos;};
	for (int i : oddNum(10))
	{
		std::cout << i << " ";
	}
}