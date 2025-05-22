#include<StudentGradebook.h>
int main()
{
	StudentGradebook s[3];
	for (int i = 0; i < 3; ++i)
		s[i].getStudentDetails();
	for (int i = 0; i < 3; ++i)
		s[i].displayGrade();
	return 0;
}