#pragma once

#include<User.h>
#include<unordered_map>
#include<Bid.h>

class Buyer:public User
{
	std::unordered_map<std::string, Bid> buyerBids;
public:
	Buyer(std::string, std::string, std::string);
	void addBid(std::string, float, std::chrono::system_clock::time_point);
	void display();
};