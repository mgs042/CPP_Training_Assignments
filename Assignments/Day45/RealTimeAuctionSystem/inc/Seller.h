#pragma once

#include<User.h>
#include<vector>
#include<map>
#include<unordered_map>
#include<Bid.h>

class Seller :public User
{
	std::vector<std::string> items;
	std::map<std::string, std::vector<Bid>> itemBids;
	std::unordered_map<std::string, Auction> itemAuctions;
};