#include<iostream>
#include<vector>
#include<algorithm>
#include<exception>

std::vector<int> getScores();
std::vector<int> sortScores(std::vector<int>);
void top3Scores(std::vector<int>);
std::vector<int> uniqueScores(std::vector<int>);
void displayScores(std::vector<int>);

struct compare
{
	bool operator()(int a, int b) const
	{
		return a > b;
	}
};

int main()
{
	std::vector<int> scores;
	scores = getScores();
	scores = sortScores(scores);
	std::cout << "All Scores (Sorted): ";
	displayScores(scores);
	std::cout << "Top 3 Scores: ";
	top3Scores(scores);
	std::cout << std::endl;
	std::cout << "Unique Scores (Sorted): ";
	scores = uniqueScores(scores);
	displayScores(scores);
	return 0;
}

std::vector<int> getScores()
{
	std::vector<int> arr;
	int score = 0;
	while (score != -1)
	{
		std::cin >> score;
		if (score == -1)
			break;
		arr.push_back(score);
	}
	return arr;
}

std::vector<int> sortScores(std::vector<int> arr)
{
	std::sort(arr.begin(), arr.end(), compare());
	return arr;
}
void top3Scores(std::vector<int> arr)
{
	try
	{
		for (int i = 0; i < 3; ++i)
			std::cout << arr.at(i) << " ";
		std::cout<<std::endl
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}
std::vector<int> uniqueScores(std::vector<int> arr)
{
	for (int i = 0;i < arr.size();++i)
	{
		for (int j = i + 1; j < arr.size(); ++j)
		{
			if (arr.at(i) == arr.at(j))
				arr.erase(arr.begin()+j);
		}
	}
	return arr;
}

void displayScores(std::vector<int> arr)
{
	for (int i = 0;i < arr.size();++i)
	{
		std::cout << arr.at(i) << " ";
	}
	std::cout << std::endl;
}
