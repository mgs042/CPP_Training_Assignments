#include<Customer.h>
#include<fstream>
#include<numeric>

Customer::Customer(std::string id, std::string n) : MSISDN(id), operatorName(n)
{
	smsSentSameOperator = 0;
	smsReceivedSameOperator = 0;
	smsSentOtherOperator = 0;
	smsReceivedOtherOperator = 0;
	mbDownloaded = 0;
	mbUploaded = 0;
}

std::string Customer::getOperatorName()
{
	return this->operatorName;
}

void Customer::incomingCall(int duration, bool isSameOperator)
{
	if (isSameOperator)
		incomingCallsSameOperator.push_back(duration);
	else
		incomingCallsOtherOperator.push_back(duration);
}

void Customer::outgoingCall(int duration, bool isSameOperator)
{
	if (isSameOperator)
		outgoingCallsSameOperator.push_back(duration);
	else
		outgoingCallsOtherOperator.push_back(duration);
}

void Customer::smsSent(bool isSameOperator)
{
	if (isSameOperator)
		++smsSentSameOperator;
	else
		++smsSentOtherOperator;
}

void Customer::smsReceived(bool isSameOperator)
{
	if (isSameOperator)
		++smsReceivedSameOperator;
	else
		++smsReceivedOtherOperator;
}

void Customer::download(int mb)
{
	mbDownloaded += mb;
}

void Customer::upload(int mb)
{
	mbUploaded += mb;
}

void Customer::customerBill()
{
	std::ofstream fileOut;
	fileOut.open("CB.txt", std::ios::app);
	fileOut << "Customer ID: " << MSISDN << "(" << operatorName << ")" << std::endl;
	fileOut << "\t* Services within the mobile operator *" << std::endl;
	fileOut << "\tIncoming voice call durations : " << std::accumulate(incomingCallsSameOperator.begin(), incomingCallsSameOperator.end(), 0) << std::endl;
	fileOut << "\tOutgoing voice call durations : "<< std::accumulate(outgoingCallsSameOperator.begin(), outgoingCallsSameOperator.end(), 0) << std::endl;
	fileOut << "\tIncoming SMS messages : " << smsReceivedSameOperator << std::endl;
	fileOut << "\tOutgoing SMS messages : " << smsSentSameOperator << std::endl;
	fileOut << "\t* Services outside the mobile operator *" << std::endl;
	fileOut << "\tIncoming voice call durations : " << std::accumulate(incomingCallsOtherOperator.begin(), incomingCallsOtherOperator.end(), 0) << std::endl;
	fileOut << "\tOutgoing voice call durations : " << std::accumulate(outgoingCallsOtherOperator.begin(), outgoingCallsOtherOperator.end(), 0) << std::endl;
	fileOut << "\tIncoming SMS messages : " << smsReceivedOtherOperator << std::endl;
	fileOut << "\tOutgoing SMS messages : " << smsSentOtherOperator << std::endl;
	fileOut << "\t* Internet use *" << std::endl;
	fileOut << "\tMB downloaded : " << mbDownloaded << " | MB uploaded : " << mbUploaded << std::endl;
	fileOut << std::endl;
	fileOut.close();
}