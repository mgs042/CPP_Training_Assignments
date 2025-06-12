#include<Auction.h>
#include<iostream>

Auction::Auction(std::string n, float m, Seller s) :itemName(n), minAmt(m), itemSeller(s) {}

std::mutex bidMtx, timeMtx;

bool operator<(Bid& ob1, Bid& ob2) 
{
	return ob1.getBidAmt() < ob2.getBidAmt();
}

void Auction::takeBid(Buyer& b, float amt)
{
	isActive = true;
	cv.notify_all();
	auto t = std::chrono::system_clock::now();
	bidMtx.lock();
	itemBids.emplace(Bid(amt, t));
	b.addBid(this->itemName, amt, t);
	itemSeller.addBid(this->itemName, amt, t);
	activeBidders.insert(b.getName());
	Bid ob = itemBids.top();
	if (amt > ob.getBidAmt())
		lead = b.getName();
	bidMtx.unlock();
	biddingTime();
}

void Auction::biddingTime()
{
	isActive = false;
	std::unique_lock<std::mutex> lockT(timeMtx);
	cv.wait_for(lockT, std::chrono::seconds(30), [this] {return isActive;});
	if (!isActive)
		resultDeclaration();
}

void Auction::resultDeclaration()
{
	std::cout << "Auction Over" << std::endl;
	Bid b = itemBids.top();
	std::cout << b.getBidAmt() << " bid made by " << lead << " has won the auction" << std::endl;
}

float Auction::getMin() { return this->minAmt; }