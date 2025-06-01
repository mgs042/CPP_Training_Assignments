#include<iostream>
#include<string>
#include<Packet.h>
#include<Logger.h>
#include<cstring>
using namespace std;

bool Packet::checkSize()
{
	return this->size > 1000;
}

int Packet::getPacketId()
{
	return this->packetId;
}

string Packet::getProtocol()
{
	return this->protocol;
}

int Packet::getSize()
{
	return this->size;
}

void Packet::setPacketId(int id)
{
	this->packetId = id;
}

void Packet::setProtocol(string p)
{
	this->protocol = p;
}

void Packet::setSize(int s)
{
	this->size = s;
}

void Packet::display()
{
	cout << "Packet " << packetId << " | " << protocol << " | " << size << " bytes" << endl;
}

void Packet::logPacket(Logger& ob, int level)
{
	char msg[50];
	const char* p = protocol.c_str();
	sprintf_s(msg, "Packet %d | %s | %d bytes", packetId, p, size);
	ob.log(level, msg);
}