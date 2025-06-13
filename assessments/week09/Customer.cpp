#include<Customer.h>

Customer::Customer(std::string id, std::string n): MSISDN(id), operatorName(n){}

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

void Customer::smsRecieved(bool isSameOperator)
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

void Customer::customerBilling()
{

}