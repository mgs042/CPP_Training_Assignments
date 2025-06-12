#include<Buyer.h>
#include<iostream>

Buyer::Buyer(std::string n, std::string u, std::string p) :User(n, u, p) {}

void Buyer::addBid(std::string item, float amt, std::chrono::system_clock::time_point t)
{
	Bid b(amt, t);
	buyerBids.insert({ item, b });
}

void Buyer::display()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Username: " << username << std::endl;
	std::cout << "Items ----- Bid Amt ----- Bid Time" << std::endl;
	for (auto & p : buyerBids)
	{
		time_t t = std::chrono::system_clock::to_time_t((p.second).getBidTime());
		std::cout << p.first << " --- " << (p.second).getBidAmt() << " --- " << ctime(&t) << std::endl;
	}
}