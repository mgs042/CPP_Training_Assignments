#pragma once

#include<vector>
#include<string>

class Operator
{
	std::string MMC_MNC;
	std::string operatorName;
	std::vector<int> incomingCalls;
	std::vector<int> outgoingCalls;
	int smsReceivedCount;
	int smsSentCount;
	int mbDownloaded;
	int mbUploaded;
public:
	Operator(std::string, std::string);
	void incomingCall(int);
	void outgoingCall(int);
	void smsReceived();
	void smsSent();
	void download(int);
	void upload(int);
	void operatorBill();
};