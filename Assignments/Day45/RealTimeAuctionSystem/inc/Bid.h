#pragma once

#include<chrono>

class Bid
{
	float bidAmt;
	std::chrono::time_point<std::chrono::system_clock> bidTime;
public:
	Bid(float, std::chrono::time_point<std::chrono::system_clock>);
	float getBidAmt();
	std::chrono::time_point<std::chrono::system_clock> getBidTime();
};