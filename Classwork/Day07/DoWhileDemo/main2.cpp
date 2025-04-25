/*
Program to draw from a deck of cards untill a Ace of Spades is found
*/

#include<iostream>
#define TOTALCARDS 10
using namespace std;

int main()
{
	int remainingCards = TOTALCARDS;
	bool cardFound;
	do
	{
		cout << "Draw a card" << endl;
		remainingCards--;
		cout << "Is the card drawn an Ace of Spades? ";
		cin >> cardFound;
		cout << endl << endl;

	} while (!cardFound && remainingCards > 0);
	cout << endl << endl;
	if (cardFound)
	{
		cout << "Card Found!!!"<<endl;
	}
	else
	{
		cout << "No more cards to draw!!!" << endl;
	}
	return 0;
}