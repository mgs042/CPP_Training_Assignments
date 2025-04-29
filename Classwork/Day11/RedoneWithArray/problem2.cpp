#include<iostream>
using namespace std;

int main()
{
	int prime[] = { 2,3,5,7 }, num, temp;
	bool flag1, flag2;
	cout << "Enter the input: ";
	cin >> num;
	cout << endl;
	for (int i = 1, count=0;count<=num;i++)
	{
		temp = i;
		flag1 = true;
		while (temp > 0)
		{
			for (int j = 0; j < 4; ++j)
			{
				flag2 = false;
				if (temp%10 == prime[j])
				{
					flag2 = true;
					break;
				}
			}
			if (!flag2)
			{
				flag1 = false;
				break;
			}
			temp /= 10;

		}
		if (flag1)
			count++;
		if (count == num)
		{
			cout << i << endl;
			break;
		}
		

	}
}