#include<iostream>
using namespace std;

//int main()
//{
//	int inHand;
//	cout << "Enter amount in hand: ";
//	cin >> inHand;
//	cout << endl << endl;
//	if (inHand < 10)
//	{
//		cout << "Get more Money" << endl;
//	}
//	else if (inHand >= 10 and inHand < 50)
//	{
//		cout << "I can order snacks";
//	}
//	else if (inHand >= 50 and inHand < 100)
//	{
//		cout << "I can order rotis" << endl;
//	}
//	else if (inHand >= 100 and inHand < 500)
//	{
//		cout << "I can order a complete meal" << endl;
//	}
//	else
//	{
//		cout << "I can order anything" << endl;
//	}
//}

int main()
{
	string inputGenre;
	cout << "Enter the genre: ";
	cin >> inputGenre;

	cout << endl << endl;
	if (inputGenre[0] >= 48 and inputGenre[0] <= 57)
	{
		cout << "Genre Name van't start with numeric characters" << endl << endl;
		return 0;
	}
	bool flag = true;
	for (int i = 0; i < inputGenre.length(); i++)
	{
		if ((inputGenre[i] >= 65 && inputGenre[i] <= 90) || (inputGenre[i] >= 97 && inputGenre[i] <= 122))
		{
			flag = false;
		}
	}
	if (!flag)
	{
		cout << "\Genre name Cannot have non-alphabet characters" << endl << endl;
		return 0;
	}
	if (inputGenre.compare("Action") == 0)
	{
		cout << "Chosen Genre is Action" << endl;
	}
	else if (inputGenre.compare("Comedy") == 0)
	{
		cout << "Chosen Genre is Comedy" << endl;
	}
	else if (inputGenre.compare("Thriller") == 0)
	{
		cout << "Chosen Genre is Thriller" << endl;
	}
	else if (inputGenre.compare("Mystery") == 0)
	{
		cout << "Chosen Genre is Mystery" << endl;
	}
	else if (inputGenre.compare("SciFi") == 0)
	{
		cout << "Chosen Genre is SciFi" << endl;
	}
	else
	{
		cout << "Unidentified genre";
	}
	cout << endl << endl;
	return 0;
}