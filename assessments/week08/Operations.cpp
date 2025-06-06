#include<Microprocessor.h>
#include<iostream>
using namespace std;

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
	bool flag;
	try
	{
		if (isRegister(op1))
			flag=writeRegister(op1, temp);
		else if (isMemoryAddr(op1))
			flag=writeMemoryAddr(getAddr(op1), temp);
		else
			throw "Unidentified OP1";
	}
	catch (const char* s)
	{
		cerr << "Error: " << s << endl;
		return false;
	}
	return flag;
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
	registers["AX"] = temp1 + temp2;
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
	registers["AX"] = temp1 - temp2;
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
	registers["AX"] = temp1 * temp2;
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
	registers["AX"] = temp1 / temp2;
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
