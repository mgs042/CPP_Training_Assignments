#pragma once

#include<deque>
#include<string>
#include<array>
#include<Microprocessor.h>
using namespace std;

class InstructionQueue
{
	Microprocessor m;
	deque<string> instructions;
	array<string, 3> tokenizeInstruction(string);
public:
	bool addInstruction(string);
	void displayInstructions();
	void execute();
};