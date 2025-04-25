/*
Problem 3: Check for Armstrong Number
Objective: Write a program to check if a given number is an Armstrong number

Requirements:

Use a loop to calculate the sum of cubes of the digits of the number

Compare the sum with the original number to determine if it's an Armstrong number

Example:
Input: 153
Output: Armstrong number
explanation:
(since (1^3 + 5^3 + 3^3 = 153))
*/

#include<iostream>
using namespace std;

int main()
{
	int n, t, sumCubes=0, m; //create input, temporary and sum of cubes variables
	cout << "Enter the input: ";
	cin >> n;
	m = n; //create a copy of the input for final comparison
	cout << endl;
	while (n > 0)
	{
		t = n % 10; //to get the last digit of n
		n /= 10; // to remove the last digit of n
		sumCubes = sumCubes + (t * t * t); //update the sum of cubes with the cube of the digit

	}
	if (sumCubes == m) //check if the number is Armstrong
		cout << "Armstrong Number" << endl;
	else
		cout << "Not a Armstrong Number" << endl;
	return 0;

}