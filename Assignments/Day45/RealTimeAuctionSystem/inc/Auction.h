#pragma once

#include<string>
#include<queue>
#include<Bid.h>
#include<Buyer.h>
#include<thread>
#include<mutex>
class Auction
{
	std::string itemName;
	float minAmt;
	std::priority_queue<Bid> itemBids;
	bool isActive;
	std::condition_variable cv;
	void biddingTime();
public:
	Auction(std::string, float);
	friend bool operator<(Bid&, Bid &);
	void takeBid(Buyer &, float);
	void resultDeclaration();
};