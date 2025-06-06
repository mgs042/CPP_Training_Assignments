#include<Microprocessor.h>
#include<iostream>
using namespace std;

Microprocessor::Microprocessor() : PC(0) 
{
	memory.fill(INT_MAX); 
	registers["AX"] = INT_MAX;
	registers["BX"] = INT_MAX;
	registers["CX"] = INT_MAX;
	registers["DX"] = INT_MAX;
}

bool Microprocessor::isRegister(string s) //to check if register
{
	return s == "AX" || s == "BX" || s == "CX" || s == "DX";
}

bool Microprocessor::isMemoryAddr(string s) //to check if register
{
	return s[0] == '[';
}

bool Microprocessor::isDirect(string s) //to check if direct
{
	return !isMemoryAddr(s) && !isRegister(s);
}

int Microprocessor::readRegister(string reg) //
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
		return memory.at(addr);
	}
	catch (exception& e)
	{
		cerr << "Error: " << e.what() << endl;
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
		memory.at(addr) = val;
	}
	catch (exception& e)
	{
		cerr << "Error: " << e.what() << endl;
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
	if(registers["AX"]!=INT_MAX)
		cout << "AX: " << registers["AX"] << endl;
	else
		cout << "AX: " << "/Any trash value" << endl;

	if (registers["BX"] != INT_MAX)
		cout << "BX: " << registers["BX"] << endl;
	else
		cout << "BX: " << "/Any trash value" << endl;

	if (registers["CX"] != INT_MAX)
		cout << "CX: " << registers["CX"] << endl;
	else
		cout << "CX: " << "/Any trash value" << endl;

	if (registers["DX"] != INT_MAX)
		cout << "DX: " << registers["DX"] << endl;
	else
		cout << "DX: " << "/Any trash value" << endl;
}

void Microprocessor::displayMemory()
{
	for (int i = 0; i < 16; ++i)
	{
		if (i < 10)
			cout << "0";
		if(memory[i]==INT_MAX)
			cout << i << " -> " << "// Any trash value" << endl;
		else
			cout << i << " -> " << memory[i] << endl;	
	}
}

int Microprocessor::getAddr(string a)
{
	size_t n = a.find('[') - a.find(']');
	return stoi(a.substr(1, n));
}