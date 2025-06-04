#include<iostream>
#include<algorithm>
using namespace std;

#define MAX 100

char* decimalToHexadecimal(int, char []);

int main()
{
	int num;
	char hexadecimal[MAX];
	memset(hexadecimal, '\0', MAX);
	cout << "Enter the decimal: ";
	cin >> num;
	cout << endl;
	cout << "Hexadecimal: " << decimalToHexadecimal(num, hexadecimal) << endl;
	return 0;
}

char* decimalToHexadecimal(int num, char hexadecimal[])
{
	char hexaValues[] = {
		'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E','F'
	};
	int i = 0;
	while (num > 0)
	{
		hexadecimal[i++] = hexaValues[num % 16];
		num /= 16;
	}
	reverse(hexadecimal, hexadecimal + i);
	return hexadecimal;
}