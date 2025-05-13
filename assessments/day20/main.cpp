#include<iostream>
#include<algorithm>
using namespace std;

#define MAX 100

char* numberToWord(int[], int, char[]);
int numberToArray(int[], int);
int searchTens(char[]);
int searchOnes(char[]);
int searchBigIndex(char[]);
int wordToNumber(char[]);

char ones[][20] = {
	"one ",
	"two ",
	"three ",
	"four ",
	"five ",
	"six ",
	"seven ",
	"eight ",
	"nine "
};

char tens[][20] = {
	"twenty ",
	"thirty ",
	"forty ",
	"fifty ",
	"sixty ",
	"seventy ",
	"eighty ",
	"ninety "
};

char elevens[][20] = {
	"ten ",
	"eleven ",
	"twelve ",
	"thirteen ",
	"fourteen ",
	"fifteen ",
	"sixteen ",
	"seventeen ",
	"eighteen ",
	"nineteen "
};

char bigIndex[][20] = {
	"thousand ",
	"lakh ",
	"crore "
};
int main()
{
	int arr[MAX], num, size;
	char word[MAX] = "";
	cout << "Enter a number: ";
	cin >> num;
	cout << endl;
	size = numberToArray(arr, num);
	cout << numberToWord(arr, size, word);
}

char* numberToWord(int arr[], int size, char word[])
{
	if (size == 1)
	{
		strcat(word, ones[arr[0] - 1]);
		return word;
	}
	else if (size == 2)
	{
		if (arr[0] != 1)
		{
			strcat(word, tens[arr[0] - 2]);
			strcat(word, ones[arr[1] - 1]);
		}
		else
		{
			strcat(word, elevens[arr[1]]);
		}
		
		return word;
	}
	else if (size == 3)
	{
		strcat(word, ones[arr[0] - 1]);
		if(arr[1]!=0||arr[2]!=0)
			strcat(word, "hundred and ");
		else
			strcat(word, "hundred ");
		if (arr[1] != 1)
		{
			strcat(word, tens[arr[1] - 2]);
			strcat(word, ones[arr[2] - 1]);
		}
		else
		{
			strcat(word, elevens[arr[2]]);
		}

		return word;
	}
	else
	{
		int n = size - 3,i;
		for (i = 0; i < size - 3;++i,--n)
		{
			if (n % 2 == 0)
			{
				if (arr[i] != 1)
				{
					strcat(word, tens[arr[i] - 2]);
				}
				else
				{
					strcat(word, elevens[arr[i + 1]]);
					strcat(word, bigIndex[(n - 1) / 2]);
					i++;
					n--;
				}
			}
			else
			{
				if (arr[i] != 0)
					strcat(word, ones[arr[i] - 1]);
				if(arr[i-1]!=0)
					strcat(word, bigIndex[n / 2]);
			}
		}
		strcat(word, ones[arr[i] - 1]);
		if(arr[i]!=0)
			strcat(word, "hundred and ");
		if (arr[i+1] != 1)
		{
			strcat(word, tens[arr[i+1] - 2]);
			strcat(word, ones[arr[i+2] - 1]);
		}
		else
		{
			strcat(word, elevens[arr[i+2]]);
		}
		return word;
	}
	
}

int numberToArray(int split[], int num) {
	int i = 0;
	while (num > 0) {
		split[i] = num % 10;
		i++;
		num /= 10;
	}
	reverse(split, split + i);
	return i;
}

int searchOnes(char str[])
{
	for (int i = 0; i < 9; ++i)
	{
		if (strcmp(str, ones[i]) == 0)
			return i;
	}
	return -1;
}

int searchTens(char str[])
{
	for (int i = 0; i < 7; ++i)
	{
		if (strcmp(str, tens[i]) == 0)
			return i;
	}
	return -1;
}

int searchBigIndex(char str[])
{
	for (int i = 0; i < 10; ++i)
	{
		if (strcmp(str, tens[i]) == 0)
			return i;
	}
	return -1;
}

int wordToNumber(char str [])









