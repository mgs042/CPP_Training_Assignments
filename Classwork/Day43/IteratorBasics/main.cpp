#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
	istream_iterator<int> inIt(cin);
	istream_iterator<int> endIt;

	vector<int> numbers(inIt, endIt);
	/*numbers.emplace_back(10);
	numbers.emplace_back(20);
	numbers.emplace_back(30);*/


	ostream_iterator<int> outIt(cout, " ");

	copy(numbers.begin(), numbers.end(), outIt);


}