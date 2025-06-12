#pragma once

#include<User.h>
#include<vector>
#include<map>
#include<unordered_map>
#include<Bid.h>
#include<Auction.h>

class Seller :public User
{
	std::vector<std::string> items;
	std::map<std::string, std::vector<Bid>> itemBids;
	std::unordered_map<std::string, Auction &> itemAuctions;
public:
	Seller(std::string, std::string, std::string);
	void addBid(std::string, float, std::chrono::system_clock::time_point);
	void addItem(std::string, float);
	void display();
};