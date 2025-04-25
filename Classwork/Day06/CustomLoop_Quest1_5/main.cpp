/*
5) If the marks obtained by a student in five different subjects are input through the keyboard, find
out the aggregate marks and percentage marks obtained by the student. Assume that the maximum
marks that can be obtained by a student in each subject are 100.
*/

#include<iostream>
using namespace std;

int main()
{
	int marks[5], sum=0, percentage;
	for(int i = 0; i < 5; ++i)
	{
		cout << "Enter the mark of Subject " << i + 1<<": ";
		cin >> marks[i];
		sum += marks[i];
	}
	percentage = sum / 5;
	cout << endl << "Aggregate: " << sum << endl << endl;
	cout << "Percentage: " << percentage << endl;
	return 0;
}