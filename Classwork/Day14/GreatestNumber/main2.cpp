#include<iostream>
using namespace std;

int main()
{
	int a, b, c, d, e, high;
	cin >> a >> b >> c >> d >> e;
	high = a;
	if (high <= b)
		high = b;
	if (high <= c)
		high = c;
	if (high <= d)
		high = d;
	if (high <= e)
		high = e;
	cout << high << " is the greatest number" << endl;
	return 0;
}