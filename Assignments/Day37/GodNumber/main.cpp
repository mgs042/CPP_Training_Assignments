#include<iostream>
#include<vector>
#include<string>
#include<array>
#include<math.h>

std::vector<int> convertStringToVector(std::string);
std::array<int, 10> frequencyCounter(std::vector<int>);
int maxDefiniteVal(std::array<int, 10>);
int minDefiniteVal(std::array<int, 10>);

int main()
{
	std::string s;
	std::cin.ignore();
	getline(std::cin, s);
	std::vector<int> digits = convertStringToVector(s);
	std::array<int, 10> freqCount = frequencyCounter(digits);
	std::cout << std::endl << abs(maxDefiniteVal(freqCount) - minDefiniteVal(freqCount)) << std::endl;
	return 0;
}



std::vector<int> convertStringToVector(std::string s)
{
	std::vector<int> arr;
	for (char i : s)
	{
		arr.push_back(i - '0');
	}
	return arr;
}

std::array<int, 10> frequencyCounter(std::vector<int> arr)
{
	std::array<int, 10> frequencyCount;
	frequencyCount.fill(0);
	for (int i : arr)
	{
		frequencyCount.at(i)++;
	}
	return frequencyCount;
}

int maxDefiniteVal(std::array<int, 10> fCount)
{
	int max = INT_MIN;
	for (int i = 0; i < 10; ++i)
	{
		if (fCount.at(i) * i > max)
			max = fCount.at(i) * i;
	}
	return max;
}

int minDefiniteVal(std::array<int, 10> fCount)
{
	int min = INT_MAX;
	for (int i = 0; i < 10; ++i)
	{
		if (fCount.at(i) * i < min && fCount.at(i)!=0)
			min = fCount.at(i) * i;
	}
	return min;
}