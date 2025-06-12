#pragma once

#include<string>
#include<queue>
#include<Bid.h>
#include<Buyer.h>
#include<thread>
#include<mutex>
#include<set>
#include<Seller.h>
class Auction
{
	std::string itemName;
	float minAmt;
	std::priority_queue<Bid> itemBids;
	bool isActive;
	std::condition_variable cv;
	std::set<std::string> activeBidders;
	std::string lead;
	Seller itemSeller;
	void biddingTime();
public:
	Auction(std::string, float, Seller);
	friend bool operator<(Bid&, Bid &);
	void takeBid(Buyer &, float);
	void resultDeclaration();
	float getMin();
};