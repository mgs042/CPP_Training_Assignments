#include<Microprocessor.h>
#include<iostream>
using namespace std;

#define MAX_VAL 16777216

Microprocessor::Microprocessor() : PC(0) 
{
	memory.fill(0);
	allocation.fill(-1);
	registers["AX"] = INT_MIN;
	registers["BX"] = INT_MIN;
	registers["CX"] = INT_MIN;
	registers["DX"] = INT_MIN;
}

bool Microprocessor::isRegister(string s) //to check if register
{
	return s == "AX" || s == "BX" || s == "CX" || s == "DX";
}

bool Microprocessor::isMemoryAddr(string s) //to check if mem address
{
	return s[0] == '[';
}

bool Microprocessor::isDirect(string s) //to check if direct
{
	return !isMemoryAddr(s) && !isRegister(s);
}

int Microprocessor::readRegister(string reg)
{
	try
	{
		if (reg == "AX" || reg == "BX" || reg == "CX" || reg == "DX")
		{
			return registers[reg];
		}
		else
			throw "Unidentified Register";
	}
	catch (const char* s)
	{
		cerr << "Error: " << s << endl;
	}
}

int Microprocessor::readMemoryAddr(int addr)
{
	try
	{
		if (allocation.at(addr) == -1)
			throw "Free memory being read";
		else if(allocation.at(addr)==0)
			return memory.at(addr);
		else if (allocation.at(addr) == 1)
		{
			int val = 0;
			for (int i = 0; allocation.at(addr + i) == 1; i++)
				val += memory.at(addr + i);
			return val;
		}
	}
	catch (exception& e)
	{
		cerr << "Error: " << e.what() << endl;
		return 0;
	}
	catch (const char* s)
	{
		cerr << "Error: " << s << endl;
		return 0;
	}
}

bool Microprocessor::writeRegister(string reg, int val)
{
	try
	{
		if (reg == "AX" || reg == "BX" || reg == "CX" || reg == "DX")
		{
			registers[reg] = val;
		}
		else
			throw "Unidentified Register";
	}
	catch (const char* s)
	{
		cerr << "Error: " << s << endl;
		return false;
	}
	return true;
}
bool Microprocessor::writeMemoryAddr(int addr, int val)
{
	try
	{
		if(val<=256)
		{
			memory.at(addr) = val;
			allocation.at(addr) = 0;
		}
		else if(val>256 && val<MAX_VAL)  //handle overflow condition, more than 1 byte values
		{
			int count = val / 256;	//find the number of blocks required to store th val
			int i = 0;
			for (i = 0; i < count; ++i)
			{
				if (allocation.at(addr + i) == -1)
				{
					memory.at(addr+i) = 256;	//store the full blocks
					allocation.at(addr+i) = 1;
				}
				else
				{
					throw "Insufficient memory at this location";
				}
			}
			if (allocation.at(addr + i) == -1)
			{
				memory.at(addr + i) = val%256;	//store the full blocks
				allocation.at(addr + i) = 1;
			}
			else
			{
				throw "Insufficient memory at this location";
			}
		}
		else
		{
			throw "Exceeds total memory capacity";
		}
	}
	catch (exception& e)
	{
		cerr << "Error: " << e.what() << endl;
		return false;
	}
	catch (const char* s)
	{
		cerr << "Error: " << s << endl;
		return false;
	}
	return true;
}

void Microprocessor::setPC(int pcVal)
{
	this->PC = pcVal;
}

int Microprocessor::getPC()
{
	return this->PC;
}


void Microprocessor::displayRegisters()
{
	cout << "AX: " << registers["AX"] << endl;
	cout << "BX: " << registers["BX"] << endl;
	cout << "CX: " << registers["CX"] << endl;
	cout << "DX: " << registers["DX"] << endl;
}

void Microprocessor::displayMemory()
{
	for (int i = 0; i < 16; ++i)
	{
		if (i < 10)
			cout << "0";
		cout << i << " -> " << memory[i] << endl;	
	}
}

int Microprocessor::getAddr(string a)
{
	size_t n = a.find('[') - a.find(']');
	return stoi(a.substr(1, n));
}