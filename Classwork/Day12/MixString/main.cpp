#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str1[20], str2[20], str3[20];
	int len1, len2, len3, a = 0, b = 0, i;
	cout<<"Enter the first string : ";
	gets_s(str1);
	cout << "Enter the second string : ";
	gets_s(str2);
	len1 = strlen(str1);
	len2 = strlen(str2);
	len3 = len1 + len2;
	for (i = 0; i < len3; ++i)
	{
		if (a < len1 && i % 2 == 0)
		{
			str3[i] = str1[a];
			a++;
		}
		else if (b < len2 && i % 2 != 0)
		{
			str3[i] = str2[b];
			b++;
		}
		else if (a >= len1)
		{
			while (b < len2)
			{
				str3[i] = str2[b];
				i++;
				b++;
			}
			break;
		}
		else if (b >= len2)
		{
			while (a < len1)
			{
				str3[i] = str1[a];
				i++;
				a++;
			}
			break;
		}
	}
	str3[i] = '\0';
	cout << str3 << endl;
}
