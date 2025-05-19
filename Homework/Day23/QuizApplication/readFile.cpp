#include<iostream>
#include<fstream>
#include<quiz.h>
using namespace std;

#define MAX_LEN 1000

bool readQuestions(QUIZ q[], const char* filename, int size)
{
	cout << "Reading Questions....." << endl;
	fstream file(filename, ios::in);
	if (!file.is_open())
		return false;
	for (int i = 0; i < size; ++i)
	{
		file.getline(q[i].question, MAX_LEN, '|');

	}
	cout << "Questions Read........" << endl;
	return true;
}

bool readAnswers(QUIZ q[], const char* filename, int size)
{
	cout << "Reading Answers....." << endl;
	fstream file(filename, ios::in);
	if (!file.is_open())
		return false;
	char ch;
	for (int i = 0; i < size; ++i)
	{
		file.get(ch);
		q[i].answer = ch - '0';

	}
	cout << "Answers Read........" << endl;
	return true;
}