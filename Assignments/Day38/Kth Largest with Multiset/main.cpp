#include<iostream>
#include<set>
using namespace std;

int main()
{
	multiset<int> nums = { 5, 20, 15, 30, 25 };
	int k = 3;
	int i = 1;
	auto pos = nums.begin();
	for (; pos != nums.end() && i < 3; i++, pos++);
	cout << *pos << endl;
}