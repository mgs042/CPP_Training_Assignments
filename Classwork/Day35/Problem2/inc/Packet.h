#pragma once
#include<string>
#include<Logger.h>
using namespace std;
class Packet
{
	int packetId;
	string protocol;
	int size;
public:
	bool checkSize();
	int getPacketId();
	string getProtocol();
	int getSize();
	void setPacketId(int);
	void setProtocol(string);
	void setSize(int);
	void display();
	void logPacket(Logger&, int);
};