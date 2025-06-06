#include<iostream>
#include<InstructionQueue.h>
using namespace std;

array<string, 3> InstructionQueue::tokenizeInstruction(string s)
{
	array<string, 3> instruction;
	size_t start = 0, end;
	end = s.find(' ', start);
	instruction.at(0) = s.substr(start, end - start);
	start = end + 1;
	if (instruction.at(0) == "HLT")
	{
		instruction.at(1) = "--";
		instruction.at(2) = "--";
		return instruction;
	}
	end = s.find(',', start);
	instruction.at(1) = s.substr(start, end - start);
	start = end + 1;
	instruction.at(2) = s.substr(start);
	return instruction;
}

bool InstructionQueue::addInstruction(string s)
{
	try
	{
		instructions.push_back(s);
	}
	catch (exception& e)
	{
		cerr << "Error: " << e.what() << endl;
		return false;
	}
	return true;
}

void InstructionQueue::displayInstructions()
{
	for (string i : instructions)
		cout << i << endl;
}

void InstructionQueue::execute()
{
	array<string, 3> instr;
	bool flag;
	for (string i : instructions)
	{
		flag = false;
		try
		{
			m.setPC(m.getPC() + 1);
			instr = tokenizeInstruction(i);
			if (instr.at(0) == "MOV")
				flag = m.mov(instr.at(1), instr.at(2));
			else if (instr.at(0) == "ADD")
				flag = m.add(instr.at(1), instr.at(2));
			else if (instr.at(0) == "SUB")
				flag = m.sub(instr.at(1), instr.at(2));
			else if (instr.at(0) == "MUL")
				flag = m.mul(instr.at(1), instr.at(2));
			else if (instr.at(0) == "DIV")
				flag = m.div(instr.at(1), instr.at(2));
			else if (instr.at(0) == "HLT")
			{
				m.hlt();
				flag = true;
			}
			else
				throw "Unidentified instruction";
		}
		catch (const char* s)
		{
			cerr << "Error: " << s << endl;
		}
		if (flag == false)
			cout << "Instruction" <<m.getPC()-1<<" cannot be executed" << endl;
	}
	
}