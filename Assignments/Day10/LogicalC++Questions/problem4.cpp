/*
4. Secret Message in Binary
You received a secret code in the form of an integer.
The number of 1s in its binary form tells how many steps you need to unlock a door.
Find the number of 1s in the binary form of the given number.
*/

#include<iostream>
#include<bitset>
using namespace std;

string convertToBinary(int);
int countOnes(string);

int main()
{
	int n;
	cout << "Enter the input: ";
	cin >> n;
	cout << endl;
	cout << "No. of 1s: " << countOnes(convertToBinary(n)) << endl;
	return 0;
}

string convertToBinary(int n)
{
	cout << endl << bitset<32>(n).to_string() << endl;
	return bitset<32>(n).to_string();
}

int countOnes(string bin)
{
	int count = 0;
	for (int i = 0; i < bin.length(); i++)
	{
		if (bin[i] == '1')
			count++;
		
	}
	return count;
}