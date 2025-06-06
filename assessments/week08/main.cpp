#include<iostream>
#include<InstructionQueue.h>
#include<fstream>
using namespace std;

int main()
{
	InstructionQueue ob;
	ifstream fileIn;
	string line;
	fileIn.open("instructions.txt", ios::in); //read from instructions.txt
	while (getline(fileIn, line))
	{
		ob.addInstruction(line);
	}
	//ob.displayInstructions();
	ob.execute();
	cout << endl;
	//ob.displayInstructions();
	return 0;
}

