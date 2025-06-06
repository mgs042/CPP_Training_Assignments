#pragma once

#include<array>
#include<string>
#include<map>
using namespace std;

class Microprocessor
{
	map<string, int> registers;
	array<int, 65536> memory;
	array<int, 65566> allocation;
	int PC;
	bool isRegister(string);
	bool isMemoryAddr(string);
	bool isDirect(string);
	int readRegister(string);
	int readMemoryAddr(int);
	bool writeRegister(string, int);
	bool writeMemoryAddr(int, int);
	void displayRegisters();
	void displayMemory();
	int getAddr(string);
public:
	Microprocessor();
	void setPC(int);
	int getPC();
	bool mov(string, string);
	bool add(string, string);
	bool sub(string, string);
	bool mul(string, string);
	bool div(string, string);
	void hlt();

};