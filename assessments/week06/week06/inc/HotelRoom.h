#pragma once
#include<string>
using namespace std;
class HotelRoom
{
private:
	int roomNo;
	string type;
	bool isBooked;
	bool checkBookingStatus();
	void setBookStatus(bool);
	int getRoomNo();
	string getType();
public:
	HotelRoom(int, string);
	void bookRoom();
	void showStatus();
};