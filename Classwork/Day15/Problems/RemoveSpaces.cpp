#include<iostream>
#include<string>
using namespace std;


char* removeSpaces(char[]);

int main(int argc, char *argv[])
{
	if (argc == 2)
		cout << removeSpaces(argv[1]);
	return 0;
	
}

char* removeSpaces(char str[])
{
	int i = 0, j = 0, k = 0;
	for (i = 0; i < strlen(str); ++i)
	{
		if (str[i] == ' ')
		{
			j = i;
			k = 0;
			while (str[j] == ' ')
			{
				k++;
				j++;
			}
			for (;j < strlen(str);++j)
			{
				str[j - k] = str[j];
			}
			str[j-k] = '\0';
		}
	}
	return str;
}

//M  G