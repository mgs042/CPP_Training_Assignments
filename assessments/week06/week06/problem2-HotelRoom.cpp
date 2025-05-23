#include<iostream>
#include<string>
#include<HotelRoom.h>
using namespace std;

HotelRoom::HotelRoom(int rNo, string t)
{
	roomNo = rNo;
	type = t;
	isBooked = false;
}

bool HotelRoom::checkBookingStatus()
{
	return isBooked;
}

void HotelRoom::setBookStatus(bool status)
{
	isBooked = status;
}

int HotelRoom::getRoomNo()
{
	return roomNo;
}

string HotelRoom::getType()
{
	return type;
}

void HotelRoom::bookRoom()
{
	if (checkBookingStatus())
	{
		cout << "Room already booked." << endl;
	}
	else
	{
		setBookStatus(true);
	}
}

void HotelRoom::showStatus()
{
	if (checkBookingStatus())
	{
		cout << "Room " << getRoomNo() << " (" << getType() << ") is now booked." << endl;
	}
	else
	{
		cout << "Room " << getRoomNo() << " (" << getType() << ") is available." << endl;
	}
}