#pragma once

#include<string>
#include<vector>

class Customer
{
	std::string MSISDN;
	std::string operatorName;
	std::vector<int> incomingCallsSameOperator;
	std::vector<int> outgoingCallsSameOperator;
	std::vector<int> incomingCallsOtherOperator;
	std::vector<int> outgoingCallsOtherOperator;
	int smsSentSameOperator;
	int smsReceivedSameOperator;
	int smsSentOtherOperator;
	int smsReceivedOtherOperator;
	int mbDownloaded;
	int mbUploaded;
public:
	Customer(std::string, std::string);
	std::string getOperatorName();
	void incomingCall(int, bool);
	void outgoingCall(int, bool);
	void smsSent(bool);
	void smsRecieved(bool);
	void download(int);
	void upload(int);
	void customerBilling();
};