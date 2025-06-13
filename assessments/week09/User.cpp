#include<User.h>

User::User(std::string n, std::string u, std::string p): name(n), username(u), password(p){}

std::string User::getUserName()
{
	return this->username;
}

std::string User::getName()
{
	return this->name;
}