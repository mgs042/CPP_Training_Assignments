#include<factorial.h>
int factorial(int n)
{
	int factorial=1;
	for (int i = n; i > 1;i--)
	{
		factorial *= i;
	}
	return factorial;
}