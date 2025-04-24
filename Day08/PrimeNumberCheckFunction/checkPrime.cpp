#include <checkprime.h>
bool checkIfPrime(int v)
{
	bool flag = true;
	if (v <= 1)
		return false;
	for (int i = 2; i <= (v / 2); ++i)
	{
		if (v % i == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}