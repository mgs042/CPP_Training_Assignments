#include<MovieRating.h>

void MovieRating::getMovie()
{
	cout << "Enter movie name: ";
	cin.ignore();
	getline(cin, title);
	cout << "Enter movie genre: ";
	cin.ignore();
	getline(cin, genre);
	cout << "Enter movie rating: ";
	cin >> rating;
	if (rating < 0 || rating>10)
	{
		cout << "Invalid Rating" << endl;
		getMovie();
	}

}

void MovieRating::displayRating()
{
	if (rating >= 0 && rating < 4)
		cout << "The movie was a Flop" << endl;
	else if (rating >= 4 && rating < 8)
		cout << "The movie was Average" << endl;
	else if (rating >= 8 && rating <= 10)
		cout << "The movie was a Hit" << endl;
}