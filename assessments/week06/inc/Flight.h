#pragma once
#include<string>
using namespace std;

class Flight
{
private:
	string flightNumber;
	int totalSeats;
	int bookedSeats;
	int availableSeats();
	string getFlightNumber();
public:
	Flight(string, int);
	void bookSeats(int);
	void showAvailability();
};