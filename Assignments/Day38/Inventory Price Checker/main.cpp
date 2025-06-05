#include<iostream>
#include<set>
using namespace std;

int main()
{
	multiset<int> prices = { 100, 150, 200, 150, 250 };
	int count = 0;
	for (auto i = prices.lower_bound(150); i != prices.end(); ++i)
		count++;
	cout << count << endl;
	prices.erase(150);
	for (auto i : prices)
		cout << i << " ";
}