#include<iostream>
using namespace std;

void evenNumbersInRange(int, int);

int main(int argc, char *argv[])
{
	/*if (argc != 3)
	{
		cout << "Invalid Number of Arguments!!!" << endl;
		return 0;
	}
	int start = atoi(argv[1]), end = atoi(argv[2]);*/
	int start = 0, end = 0;
	cout << "Enter start of range: ";
	cin >> start;
	cout << "Enter the end of range: ";
	cin >> end;
	cout << endl;
	evenNumbersInRange(start, end);
	return 0;
}

void evenNumbersInRange(int s, int e)
{
	for (int i = s + 1; i < e; ++i)
	{
		if (i % 2 == 0)
			cout << i << " ";
	}
	cout << endl;
	return;
}