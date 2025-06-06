#include<Microprocessor.h>
#include<iostream>
using namespace std;

Microprocessor::Microprocessor() : AX(0), BX(0), CX(0), DX(0), PC(0) { memory.fill(INT_MAX); }

bool Microprocessor::isRegister(string s)
{
	return s == "AX" || s == "BX" || s == "CX" || s == "DX";
}

bool Microprocessor::isMemoryAddr(string s)
{
	return s[0] == '[';
}

bool Microprocessor::isDirect(string s)
{
	return !isMemoryAddr(s) && !isRegister(s);
}

int Microprocessor::readRegister(string reg)
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

bool Microprocessor::mov(string op1, string op2)
{
	int temp;
	try
	{
		if (isRegister(op2))
			temp = readRegister(op2);
		else if (isMemoryAddr(op2))
			temp = readMemoryAddr(getAddr(op2));
		else if (isDirect(op2))
			temp = stoi(op2);
		else
			throw "Unidentified OP2";
	}
	catch (const char* s)
	{
		cerr << "Error: " << s << endl;
		return false;
	}

	try
	{
		if (isRegister(op1))
			writeRegister(op1, temp);
		else if (isMemoryAddr(op1))
			writeMemoryAddr(getAddr(op1), temp);
		else
			throw "Unidentified OP1";
	}
	catch (const char* s)
	{
		cerr << "Error: " << s << endl;
		return false;
	}
	return true;
}

bool Microprocessor::add(string op1, string op2)
{
	int temp1, temp2;
	try
	{
		if (isRegister(op1))
			temp1 = readRegister(op1);
		else if (isMemoryAddr(op1))
			temp1 = readMemoryAddr(getAddr(op1));
		else if (isDirect(op1))
			temp1 = stoi(op1);
		else
			throw "Unidentified OP1";
	}
	catch (const char* s)
	{
		cerr << "Error: " << s << endl;
		return false;
	}

	try
	{
		if (isRegister(op2))
			temp2 = readRegister(op2);
		else if (isMemoryAddr(op2))
			temp2 = readMemoryAddr(getAddr(op2));
		else if (isDirect(op2))
			temp2 = stoi(op2);
		else
			throw "Unidentified OP1";
	}
	catch (const char* s)
	{
		cerr << "Error: " << s << endl;
		return false;
	}
	AX = temp1 + temp2;
	return true;
}

bool Microprocessor::sub(string op1, string op2)
{
	int temp1, temp2;
	try
	{
		if (isRegister(op1))
			temp1 = readRegister(op1);
		else if (isMemoryAddr(op1))
			temp1 = readMemoryAddr(getAddr(op1));
		else if (isDirect(op1))
			temp1 = stoi(op1);
		else
			throw "Unidentified OP1";
	}
	catch (const char* s)
	{
		cerr << "Error: " << s << endl;
		return false;
	}

	try
	{
		if (isRegister(op2))
			temp2 = readRegister(op2);
		else if (isMemoryAddr(op2))
			temp2 = readMemoryAddr(getAddr(op2));
		else if (isDirect(op2))
			temp2 = stoi(op2);
		else
			throw "Unidentified OP1";
	}
	catch (const char* s)
	{
		cerr << "Error: " << s << endl;
		return false;
	}
	AX = temp1 - temp2;
	return true;
}

bool Microprocessor::mul(string op1, string op2)
{
	int temp1, temp2;
	try
	{
		if (isRegister(op1))
			temp1 = readRegister(op1);
		else if (isMemoryAddr(op1))
			temp1 = readMemoryAddr(getAddr(op1));
		else if (isDirect(op1))
			temp1 = stoi(op1);
		else
			throw "Unidentified OP1";
	}
	catch (const char* s)
	{
		cerr << "Error: " << s << endl;
		return false;
	}

	try
	{
		if (isRegister(op2))
			temp2 = readRegister(op2);
		else if (isMemoryAddr(op2))
			temp2 = readMemoryAddr(getAddr(op2));
		else if (isDirect(op2))
			temp2 = stoi(op2);
		else
			throw "Unidentified OP1";
	}
	catch (const char* s)
	{
		cerr << "Error: " << s << endl;
		return false;
	}
	AX = temp1 * temp2;
	return true;
}

bool Microprocessor::div(string op1, string op2)
{
	int temp1, temp2;
	try
	{
		if (isRegister(op1))
			temp1 = readRegister(op1);
		else if (isMemoryAddr(op1))
			temp1 = readMemoryAddr(getAddr(op1));
		else if (isDirect(op1))
			temp1 = stoi(op1);
		else
			throw "Unidentified OP1";
	}
	catch (const char* s)
	{
		cerr << "Error: " << s << endl;
		return false;
	}

	try
	{
		if (isRegister(op2))
			temp2 = readRegister(op2);
		else if (isMemoryAddr(op2))
			temp2 = readMemoryAddr(getAddr(op2));
		else if (isDirect(op2))
			temp2 = stoi(op2);
		else
			throw "Unidentified OP1";
		if (temp2 == 0)
			throw "Divide by zero attempted";
	}
	catch (const char* s)
	{
		cerr << "Error: " << s << endl;
		return false;
	}
	AX = temp1 / temp2;
	return true;
}

void Microprocessor::hlt()
{
	cout << "Received Interrupt" << endl << endl;
	cout << "Snapshot of the processor" << endl;
	displayRegisters();
	cout << endl;
	cout << "First 16 Memory Contents" << endl;
	displayMemory();
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