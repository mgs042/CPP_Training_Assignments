#include<iostream>
#include<string>
#include<Flight.h>

Flight::Flight(string fnumber, int seats)
{
	flightNumber = fnumber;
	totalSeats = seats;
	bookedSeats = 0;
}

int Flight::availableSeats()
{
	return totalSeats - bookedSeats;
}

string Flight::getFlightNumber()
{
	return flightNumber;
}

void Flight::bookSeats(int seats)
{
	if (seats > availableSeats())
	{
		cout << "Booking Failed: Not enough seats." << endl;
		return;
	}
	else
	{ 
		bookedSeats += seats;
	}
}

void Flight::showAvailability()
{
	cout << "Flight: " << getFlightNumber() << " | " << "Seats Available: " << availableSeats() << endl;
}
