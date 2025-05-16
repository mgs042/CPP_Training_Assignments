#include<iostream>
using namespace std;

#define MAX 100

int removeConsecutiveChars(char *str);

int main()
{
	char str[MAX];
	cout << "Enter String: ";
	cin.getline(str, MAX - 1);
	cout << endl;
	cout << "Characters removed: " << removeConsecutiveChars(str) << endl;
	cout << "After character removal: " << str;
	return 0;
}

int removeConsecutiveChars(char *str)
{
	int count = 0, i = 0, j = 0;
	char ch1, ch2;
	while (*(str + i))
	{
		ch1 = tolower(*(str + i));
		ch2 = tolower(*(str + i + 1));
		if (ch1 + 1 == ch2)
		{ 
			for (j = i + 2; *(str + j) != '\0';++j)
				*(str + j - 2) = *(str + j);
			*(str + j - 2) = '\0';
			count++;
			i = 0;
		}
		else
			i++;
	}
	return count;
}
