#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int binaryToDecimal(char bin[])
{
	int count = 0, sum = 0;
	while (bin[count] != '\0')
		count++;
	for (int i = count - 1, pos = 0; i >= 0; --i, pos++)
	{
		sum = sum + (pow(2, pos) * (bin[i] - 48));
	}
	return sum;
}

char* decimalToBinary(int num, char bin[])
{
	int i = 0;
	while (num > 0)
	{
		bin[i] = (num % 2) + 48;
		i++;
		num /= 2;
	}
	bin[i] = '\0';
	reverse(bin, bin+strlen(bin));
	return bin;
}

int octalToDecimal(int oct)
{
	int sum = 0, pos = 0;
	while(oct>0)
	{
		sum = sum + (pow(8, pos) * (oct%10));
		oct /= 10;
		pos++;
	}
	return sum;
}

int decimalToOctal(int num)
{
	int oct = 0, i = 0;
	while (num > 0)
	{
		oct = oct + (num % 8)*pow(10,i++);
		num /= 8;
	}
	return oct;
}

int main()
{
	char str[] = "101", str1[10];
	cout << binaryToDecimal(str) << endl;
	cout << decimalToBinary(15, str1) << endl;
	cout << octalToDecimal(134) << endl;
	cout << decimalToOctal(92);
}