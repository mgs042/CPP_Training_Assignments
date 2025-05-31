#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	ofstream outFile("Multiplication.txt", ios::app);
	for (int i = 1; i <= 10; ++i)
	{
		outFile << "5 * " << i << " = " << 5 * i << endl;
	}
	outFile << "===================================" << endl;
	string line;
	ifstream inFile("Multiplication.txt", ios::in);
	if (!inFile.is_open())
	{
		cout << "File Not Opened" << endl;
	}
	else
	{
		getline(inFile, line, '%');
		cout << line << endl;
	}
	inFile.close();
	for (int i = 1; i <= 10; ++i)
	{
		outFile << "6 * " << i << " = " << 6 * i << endl;
	}
	outFile.close();
	return 0;
}