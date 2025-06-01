#include<PacketMonitor.h>
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

enum logLevel
{
	INFO = 0,
	DEBUG,
	WARNING,
	ERROR
};

void PacketMonitor::readPackets(const char* filename)
{
	ifstream packetFile;
	try
	{
		packetFile.open(filename, ios::in);
		if (!packetFile.is_open())
		{
			throw "Packet File cannot be opened";
		}
	}
	catch (const char* c)
	{
		cout << "Error: " << c << endl;
		exit(0);
	}
	int id, s;
	Packet ob;
	string p;
	while (!packetFile.eof())
	{
		packetFile >> id >> p >> s;
		ob.setPacketId(id);
		ob.setSize(s);
		ob.setProtocol(p);
		packetBuffer.push_back(ob);
	}
}

void PacketMonitor::detectLargePackets(Logger &ob)
{
	for (auto i : packetBuffer)
	{
		if (i.checkSize())
		{
			i.display();
			i.logPacket(ob, WARNING);
		}
	}
}

void PacketMonitor::filterByProtocol(string p, Logger &ob)
{
	for (auto i : packetBuffer)
	{
		if (p == i.getProtocol())
		{
			i.display();
			i.logPacket(ob, DEBUG);
		}
	}
}

int PacketMonitor::getPacketCount()
{
	return packetBuffer.size();
}