#include<Microprocessor.h>
#include<iostream>
using namespace std;

Microprocessor::Microprocessor() : AX(0), BX(0), CX(0), DX(0), PC(0) { memory.fill(INT_MAX); }

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
		if (reg == "AX")
			return AX;
		else if (reg == "BX")
			return BX;
		else if (reg == "CX")
			return CX;
		else if (reg == "DX")
			return DX;
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
		if (reg == "AX")
			AX = val;
		else if (reg == "BX")
			BX = val;
		else if (reg == "CX")
			CX = val;
		else if (reg == "DX")
			DX = val;
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
	cout << "AX: " << AX << endl;
	cout << "BX: " << BX << endl;
	cout << "CX: " << CX << endl;
	cout << "DX: " << DX << endl;
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