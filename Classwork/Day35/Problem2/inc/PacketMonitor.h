#pragma once
#include<Packet.h>
#include<vector>
using namespace std;
class PacketMonitor
{
	vector<Packet> packetBuffer;
public:
	void readPackets(const char*, Logger&);
	void filterByProtocol(string, Logger&);
	void detectLargePackets(Logger&);
	int getPacketCount();
};