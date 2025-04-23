/*
Q.
Write a python program to print alphabet triangle.
Input: 5
Output:

     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA
 */

#include<iostream>
using namespace std;


int main()
{
    int n;
    char ch = 65;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = n - i ;j>=0; j--)
            cout << " ";
        for (int j = 0; j < i; j++)
            cout << char(65+j);
        for (int j = i - 1; j > 0; --j)
            cout << char(65 + j-1);
        cout << endl;
    }
    return 0;
}

