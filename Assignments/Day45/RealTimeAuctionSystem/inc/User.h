#pragma once

#include<string>

class User
{
protected:
	std::string name;
	std::string username;
	std::string password;
public:
	User(std::string, std::string, std::string);
	virtual void display() = 0;
	bool checkPassword(std::string);
	std::string getUsername();
	std::string getName();
};