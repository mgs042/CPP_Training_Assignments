#pragma once
typedef struct quizQuestions
{
	char question[1000];
	int answer;

}QUIZ;

bool* quizRound(QUIZ[], int);
void displayResult(bool*, int);
void displayBar();


bool readQuestions(QUIZ [], const char* , int);
bool readAnswers(QUIZ[], const char*, int);