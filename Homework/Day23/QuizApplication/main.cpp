#include<iostream>
#include<quiz.h>
using namespace std;

#define SIZE 10

int main()
{
	QUIZ q[SIZE];
	readQuestions(q, "questions.txt", SIZE);
	readAnswers(q, "answers.txt", SIZE);
	bool* ans = quizRound(q, SIZE);
	displayResult(ans, SIZE);
	/*for (int i = 0; i < SIZE; ++i)
		cout << q[i].answer;*/
	return 0;

}