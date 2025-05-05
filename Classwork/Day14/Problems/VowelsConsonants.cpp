#include<iostream>
#include<cctype>
using namespace std;

int main()
{
	char ch, input;
	cout << "Enter a character: ";
	cin >> input;
	ch = tolower(input);
	if (int(ch) < 97 || int(ch) > 122)
	{
		cout << "Invalid Input" << endl;
		return 0;
	}
	switch (ch)
	{
	default:
		cout << input << " is a consonant";
		break;
	case 'a':
		cout << input << " is a vowel";
		break;
	case 'e':
		cout << input << " is a vowel";
		break;
	case 'i':
		cout << input << " is a vowel";
		break;
	case 'o':
		cout << input << " is a vowel";
		break;
	case 'u':
		cout << input << " is a vowel";
		break;
	}
	cout << endl;
	return 0;
}