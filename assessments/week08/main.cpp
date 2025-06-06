#include<iostream>
#include<InstructionQueue.h>
#include<fstream>
using namespace std;

int main()
{
	InstructionQueue ob;
	ifstream fileIn;
	string line;
	fileIn.open("instructions.txt", ios::in);
	while (getline(fileIn, line))
	{
		ob.addInstruction(line);
	}
	//ob.displayInstructions();
	cout << endl << endl;
	ob.execute();
}