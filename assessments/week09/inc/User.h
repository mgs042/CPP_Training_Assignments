#pragma once

#include<string>

class User
{
	std::string name;
	std::string username;
	std::string password;
	bool checkPassword();
public:
	User(std::string, std::string, std::string);
	std::string getUserName();
	std::string getName();
};