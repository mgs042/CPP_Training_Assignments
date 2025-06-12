#include<User.h>

User::User(std::string n, std::string u, std::string p) :name(n), username(u), password(p) {};

bool User::checkPassword(std::string p)
{
	return this->password == p;
}

std::string User::getUsername()
{
	return this->username;
}