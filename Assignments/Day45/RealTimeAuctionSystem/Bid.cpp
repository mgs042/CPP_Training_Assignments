#include<Bid.h>

Bid::Bid(float amt, std::chrono::time_point<std::chrono::system_clock> time) : bidAmt(amt), bidTime(time) {}

float Bid::getBidAmt()
{
	return this->bidAmt;
}

std::chrono::time_point<std::chrono::system_clock> Bid::getBidTime()
{
	return this->bidTime;
}