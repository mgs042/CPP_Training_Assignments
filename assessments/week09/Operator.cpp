#include<Operator.h>
#include<fstream>
#include<numeric>

Operator::Operator(std::string id, std::string n): MMC_MNC(id), operatorName(n)
{
	smsReceivedCount = 0;
	smsSentCount = 0;
	mbDownloaded = 0;
	mbUploaded = 0;
}

void Operator::incomingCall(int duration)
{
	incomingCalls.push_back(duration);
}

void Operator::outgoingCall(int duration)
{
	outgoingCalls.push_back(duration);
}

void Operator::smsReceived()
{
	++smsReceivedCount;
}

void Operator::smsSent()
{
	++smsSentCount;
}

void Operator::download(int mb)
{
	mbDownloaded += mb;
}

void Operator::upload(int mb)
{
	mbUploaded += mb;
}

void Operator::operatorBill()
{
	std::ofstream fileOut;
	fileOut.open("IOSB.txt", std::ios::app);
	fileOut << "Operator Brand: " << operatorName << " (" << MMC_MNC << ")" << std::endl;
	fileOut << "\tIncoming voice call durations : " << std::accumulate(incomingCalls.begin(), incomingCalls.end(), 0) << std::endl;
	fileOut << "\tOutgoing voice call durations : " << std::accumulate(outgoingCalls.begin(), outgoingCalls.end(), 0) << std::endl;
	fileOut << "\tIncoming SMS messages : " << smsReceivedCount << std::endl;
	fileOut << "\tOutgoing SMS messages : " << smsSentCount << std::endl;
	fileOut << "\tMB downloaded : " << mbDownloaded << " | MB uploaded : " << mbUploaded << std::endl;
	fileOut << std::endl;
	fileOut.close();
}