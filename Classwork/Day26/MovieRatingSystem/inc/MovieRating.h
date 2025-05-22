#pragma once
#include<iostream>
#include<string>
using namespace std;
class MovieRating
{
	string title;
	string genre;
	int rating;
public:
	void getMovie();
	void displayRating();
};