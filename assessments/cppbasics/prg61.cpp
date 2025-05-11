/*
61) Print Reverse Counting from N to 1 using while loop
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n > 0)
		cout << n-- << " ";
	return 0;
}