#include<iostream>
using namespace std;

#define CAP 200

int main()
{
	int arr[CAP], itr, e=CAP/2, o=0;
	for (itr = 0;itr < CAP;itr++)
	{
		if ((itr+1) % 2 == 0)
		{
			arr[e] = itr + 1;
			e++;
		}
		else
		{
			arr[o] = itr + 1;
			o++;
		}

	}
	for (itr = 0; itr < CAP; ++itr)
		cout << arr[itr] << " ";

}