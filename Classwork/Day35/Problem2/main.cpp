#include<iostream>
#include<Logger.h>
#include<PacketMonitor.h>
using namespace std;

enum logLevel
{
	INFO = 0,
	DEBUG,
	WARNING,
	ERROR
};

int menu()
{
	int choice;
	cout << "==== NetMon Packet Monitor ====" << endl;
	cout << "1. Load packet data" << endl;
	cout << "2. Filter by protocol" << endl;
	cout << "3. Check for large packets" << endl;
	cout << "4. Export log" << endl;
	cout << "5. Exit" << endl;
	cin >> choice;
	return choice;
}

int main()
{
	int ch=0, count = 0;
	char msg[100];
	string targetProtocol;
	PacketMonitor pMon;
	Logger pLog("netmon_log.txt");
	while (ch != 5)
	{
		ch = menu();
		switch (ch)
		{
		default:
			cout << "Invalid Option" << endl;
			break;
		case 1:
			pMon.readPackets("packets.txt", pLog);
			count = pMon.getPacketCount();
			sprintf_s(msg, "Loaded %d packets", count);
			pLog.log(INFO, msg);
			break;
		case 2:
			cin.ignore();
			getline(cin, targetProtocol);
			pMon.filterByProtocol(targetProtocol, pLog);
			break;
		case 3:
			pMon.detectLargePackets(pLog);
			break;
		case 4:
			pLog.log(INFO, "Logs saved to netmon_log.txt");
			break;
		case 5:
			cout << "Exiting!!! " << endl;
			break;
		}
		cout << endl;
	}
}