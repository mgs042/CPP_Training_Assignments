#include<Auction.h>

Auction::Auction(std::string n, float m) :itemName(n), minAmt(m) {}

std::mutex bidMtx;

bool operator<(Bid& ob1, Bid& ob2) 
{
	return ob1.getBidAmt() < ob2.getBidAmt();
}

void Auction::takeBid(Buyer& b, float amt)
{
	auto t = std::chrono::system_clock::now();

	itemBids.emplace(Bid(amt, t));
	b.addBid(this->itemName, amt, t);
}

void Auction::resultDeclaration();