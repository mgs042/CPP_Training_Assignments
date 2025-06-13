#pragma once

#include<map>
#include<string>
#include<Customer.h>
#include<Operator.h>
#include<fstream>
#include<array>

enum callType{MOC, MTC, SMS_MO, SMS_MT, GPRS};

class CDRProcessor
{
	std::string filename;
	std::map<std::string, Customer> CustomersById;
	std::map<std::string, Operator> OperatorsById;
	std::map<std::string, Operator> OperatorsByName;
	std::array<std::string, 9> tokenizeCDR(std::string);
	int callTypeToInt(std::string);
public:
	CDRProcessor(std::string);
	void readCDRForCustomer();
	void readCDRForOperator();
	void customerBillingById(std::string);
	void operatorBillingById(std::string);
	void operatorBillingByName(std::string);
};