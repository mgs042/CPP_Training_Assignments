/*
Problem 2: Digits Frequency Counter
Objective: Write a program to count the frequency of each digit (0–9) in a given integer\

Note:
- do not use arrays
Example:
Input: 34534453
Output:
Digit frequencies:
0: 0
1: 0
2: 0
3: 3
4: 3
5: 0
6: 0
7: 0
8: 0
9: 0
0: 0
*/

#include<iostream>
using namespace std;

int main()
{
	int n, temp; //declaring the input and temporary variables
	int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0; //to track count of each digit;
	cout << "Enter the value of n: ";
	cin >> n;
	cout << endl;
	while (n > 0)
	{
		temp = n % 10; //to get the last digit of n
		n /= 10; //to remove the last digit of n
		switch (temp) //switch case to update the appropriate counter based on the digit
		{
			default:
				cout << "Unrecognized digit " << temp << endl;
				break;
			case 0:
				count0++;
				break;
			case 1:
				count1++;
				break;
			case 2:
				count2++;
				break;
			case 3:
				count3++;
				break;
			case 4:
				count4++;
				break;
			case 5:
				count5++;
				break;
			case 6:
				count6++;
				break;
			case 7:
				count7++;
				break;
			case 8:
				count8++;
				break;
			case 9:
				count9++;
				break;

		}
	}
	cout << "Digit Frequencies: " << endl;
	cout << "0: " << count0 << endl;
	cout << "1: " << count1 << endl;
	cout << "2: " << count2 << endl;
	cout << "3: " << count3 << endl;
	cout << "4: " << count4 << endl;
	cout << "5: " << count5 << endl;
	cout << "6: " << count6 << endl;
	cout << "7: " << count7 << endl;
	cout << "8: " << count8 << endl;
	cout << "9: " << count9 << endl;
	return 0;
}