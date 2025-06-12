#include<Seller.h>
#include<iostream>
#include<thread>
#include<mutex>

std::mutex sellMtx;
Seller::Seller(std::string n, std::string u, std::string p) :User(n, u, p) {}

void Seller::addBid(std::string n, float amt, std::chrono::system_clock::time_point t)
{
	itemBids.at(n).emplace_back(Bid(amt, t));
}


void Seller::addItem(std::string n, float m)
{
	std::lock_guard<std::mutex> lockS(sellMtx);
	items.push_back(n);
	std::vector<Bid> b;
	itemBids.insert({ n, b });
	Auction ob(n, m, *this);
	itemAuctions.insert({n, ob});

}

void Seller::display()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Username: " << username << std::endl;
	std::cout << "Items ----- Min Amt " << std::endl;
	for (auto& p : itemAuctions)
	{
		std::cout << p.first << " --- " << p.second.getMin() << std::endl;
	}
}