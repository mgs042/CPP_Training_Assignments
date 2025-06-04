#include<iostream>
#include<stdlib.h>
#include<quiz.h>
using namespace std;

void displayBar()
{
	cout << endl << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
}

bool* quizRound(QUIZ q[], int size)
{
	cout << endl << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-Quiz Round-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
	bool* ans = (bool*)malloc(sizeof(bool) * size);
	int choice;
	for (int i = 0; i < size; ++i)
	{
		displayBar();
		cout << q[i].question << endl;
		cout << "Enter your choice [1/2/3/4]: ";
		cin >> choice;
		ans[i] = (choice == q[i].answer);
	}
	return ans;
}


void displayResult(bool* ans, int size)
{
	int countRight = 0;
	float percentage;
	for (int i = 0; i < size; ++i)
	{
		if (ans[i])
			countRight++;
	}
	displayBar();
	displayBar();
	cout << countRight << "/" << size << " Correct !!!!" << endl;
	percentage = ((float)(countRight) / (float)size) * 100;
	if (percentage > 70)
		cout << "PASS!! :) ---- " << percentage << "%";
	else
		cout << "FAIL!! :( ---- " << percentage << "%";
	displayBar();
	displayBar();
}