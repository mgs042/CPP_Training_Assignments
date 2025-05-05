#include<iostream>
#define MAX 100
using namespace std;

char* ltrim(char*);
char* rtrim(char*);
char* trim(char*);


int main()
{
	char str[MAX];
	cout << "Enter a string: ";
	cin.getline(str, MAX);
	cout << "Left trim: " << '|' << ltrim(str) << '|' << endl;
	cout << "Right trim: " << '|' << rtrim(str) << '|' << endl;
	cout << "Full trim: " << '|' << trim(str) << '|' << endl;
	cout << endl;
	return 0;

}

char* ltrim(char* ptr)
{
	char* temp;
	for (temp = ptr;*temp != '\0';++temp)
	{
		if (*temp != ' ')
			break;
	}
	return temp;
}

char* rtrim(char* ptr)
{
	char* end, *temp;
	for (end = ptr;*end != '\0';++end);
	for (temp = end-1; *temp == ' '; --temp);
	temp++;
	*temp = '\0';
	return ptr;
}

char* trim(char* ptr)
{
	ptr = ltrim(ptr);
	ptr = rtrim(ptr);
	return ptr;
}