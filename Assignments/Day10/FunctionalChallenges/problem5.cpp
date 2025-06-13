/*
5. Stairway of Squares
Hint:

Each step involves summing the square of all previous steps.
Recursion Base Case: If n == 0, return 0 (no more steps).
Logic: For each step, return the square of n and add the sum of squares for the previous steps (n-1).
Example:
For n = 3, the sum of squares would be:

3^2 + 2^2 + 1^2 = 9 + 4 + 1 = 14
*/

#include<iostream>
#include<math.h>
using namespace std;

int sumOfSquares(int);

int main()
{
	int num;
	cout << "Enter the input: ";
	cin >> num;
	cout << endl;
	cout << "Sum of Squares is: " << sumOfSquares(num) << endl;
	return 0;
}

int sumOfSquares(int num)
{
	if (num == 1)
		return 1;
	else
		return pow(num, 2) + sumOfSquares(num - 1);
}