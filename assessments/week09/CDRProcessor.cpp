#include<CDRProcessor.h>
#include<iostream>
#include<thread>
#include<mutex>

CDRProcessor::CDRProcessor(std::string f) : filename(f) {}

std::array<std::string, 9> CDRProcessor::tokenizeCDR(std::string line)
{
	std::array<std::string, 9> cdr;
	size_t start = 0, end = 0;
	int i = 0;
	while ((end = line.find('|',start)) != std::string::npos)
	{
		cdr.at(i) = line.substr(start, end - start);
		i++;
		//std::cout << cdr.at(i) <<" ";
		//std::cout << line.substr(start, end - start) << " ";
		start = end + 1;
	}
	cdr.at(i) = line.substr(start, end - start);
	/*for (auto f : cdr)
		std::cout << f << std::endl;*/
	return cdr;
}

int CDRProcessor::callTypeToInt(std::string s)
{
	if (s == "MOC")
		return MOC;
	else if (s == "MTC")
		return MTC;
	else if (s == "SMS-MO")
		return SMS_MO;
	else if (s == "SMS-MT")
		return SMS_MT;
	else if (s == "GPRS")
		return GPRS;

}

std::mutex cmtx;
void CDRProcessor::readCDRForCustomer()
{
	std::ifstream f1;
	f1.open(filename);
	std::string line;
	std::array<std::string, 9> splitCDR;
	while (getline(f1, line))
	{
		splitCDR = tokenizeCDR(line);
		if (CustomersById.find(splitCDR.at(0)) == CustomersById.end())
		{
			Customer c(splitCDR.at(0), splitCDR.at(1));
			switch (callTypeToInt(splitCDR.at(3)))
			{
			case MOC:
				c.outgoingCall(stoi(splitCDR.at(4)), splitCDR.at(2) == splitCDR.at(8));
				break;
			case MTC:
				c.incomingCall(stoi(splitCDR.at(4)), splitCDR.at(2) == splitCDR.at(8));
				break;
			case SMS_MO:
				c.smsSent(splitCDR.at(2) == splitCDR.at(8));
				break;
			case SMS_MT:
				c.smsReceived(splitCDR.at(2) == splitCDR.at(8));
				break;
			case GPRS:
				if (stoi(splitCDR.at(5)) == 0 && stoi(splitCDR.at(6)) != 0)
					c.upload(stoi(splitCDR.at(6)));
				else if (stoi(splitCDR.at(5)) != 0 && stoi(splitCDR.at(6)) == 0)
					c.download(stoi(splitCDR.at(5)));
				else
					std::cerr << "Invalid Format" << std::endl;
				break;
			default:
				std::cerr << "Invalid Call type" << std::endl;
				break;
			}
			CustomersById.insert({ splitCDR.at(0), c });
		}
		else
		{
			auto itr = CustomersById.find(splitCDR.at(0));
			switch (callTypeToInt(splitCDR.at(3)))
			{
			case MOC:
				itr->second.outgoingCall(stoi(splitCDR.at(4)), splitCDR.at(2) == splitCDR.at(8));
				break;
			case MTC:
				itr->second.incomingCall(stoi(splitCDR.at(4)), splitCDR.at(2) == splitCDR.at(8));
				break;
			case SMS_MO:
				itr->second.smsSent(splitCDR.at(2) == splitCDR.at(8));
				break;
			case SMS_MT:
				itr->second.smsReceived(splitCDR.at(2) == splitCDR.at(8));
				break;
			case GPRS:
				if (stoi(splitCDR.at(5)) == 0 && stoi(splitCDR.at(6)) != 0)
					itr->second.upload(stoi(splitCDR.at(6)));
				else if (stoi(splitCDR.at(5)) != 0 && stoi(splitCDR.at(6)) == 0)
					itr->second.download(stoi(splitCDR.at(5)));
				else
					std::cerr << "Invalid Format" << std::endl;
				break;
			default:
				std::cerr << "Invalid Call type" << std::endl;
				break;
			}
		}

	}
	f1.close();
}

void CDRProcessor::readCDRForOperator()
{
	std::ifstream f2;
	f2.open(filename);
	std::string line;
	std::array<std::string, 9> splitCDR;
	while (getline(f2, line))
	{
		splitCDR = tokenizeCDR(line);
		if (OperatorsById.find(splitCDR.at(2)) == OperatorsById.end())
		{
			Operator c(splitCDR.at(2), splitCDR.at(1));
			switch (callTypeToInt(splitCDR.at(3)))
			{
			case MOC:
				c.outgoingCall(stoi(splitCDR.at(4)));
				break;
			case MTC:
				c.incomingCall(stoi(splitCDR.at(4)));
				break;
			case SMS_MO:
				c.smsSent();
				break;
			case SMS_MT:
				c.smsReceived();
				break;
			case GPRS:
				if (stoi(splitCDR.at(5)) == 0 && stoi(splitCDR.at(6)) != 0)
					c.upload(stoi(splitCDR.at(6)));
				else if (stoi(splitCDR.at(5)) != 0 && stoi(splitCDR.at(6)) == 0)
					c.download(stoi(splitCDR.at(5)));
				else
					std::cerr << "Invalid Format" << std::endl;
				break;
			default:
				std::cerr << "Invalid Call type" << std::endl;
				break;
			}
			OperatorsById.insert({ splitCDR.at(2), c });
			//OperatorsByName.insert({ splitCDR.at(1), c });
		}
		else
		{
			auto itr = OperatorsById.find(splitCDR.at(2));
			switch (callTypeToInt(splitCDR.at(3)))
			{
			case MOC:
				itr->second.outgoingCall(stoi(splitCDR.at(4)));
				break;
			case MTC:
				itr->second.incomingCall(stoi(splitCDR.at(4)));
				break;
			case SMS_MO:
				itr->second.smsSent();
				break;
			case SMS_MT:
				itr->second.smsReceived();
				break;
			case GPRS:
				if (stoi(splitCDR.at(5)) == 0 && stoi(splitCDR.at(6)) != 0)
					itr->second.upload(stoi(splitCDR.at(6)));
				else if (stoi(splitCDR.at(5)) != 0 && stoi(splitCDR.at(6)) == 0)
					itr->second.download(stoi(splitCDR.at(5)));
				else
					std::cerr << "Invalid Format" << std::endl;
				break;
			default:
				std::cerr << "Invalid Call type" << std::endl;
				break;
			}
		}

	}
	f2.close();
}

void CDRProcessor::customerBillingById(std::string id)
{
	auto itr = CustomersById.find(id);
	if (itr == CustomersById.end())
		std::cerr << "No such customer found" << std::endl;
	else
		itr->second.customerBill();
}

void CDRProcessor::operatorBillingById(std::string id)
{
	auto itr = OperatorsById.find(id);
	if (itr == OperatorsById.end())
		std::cerr << "No such operator found" << std::endl;
	else
		itr->second.operatorBill();
}
//void CDRProcessor::operatorBillingByName(std::string);