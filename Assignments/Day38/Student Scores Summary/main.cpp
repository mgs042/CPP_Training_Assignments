#include<iostream>
#include<set>
using namespace std;

int main()
{
	multiset<int> marks = { 100, 150, 200, 150, 250 };
	set<int> uniqueMarks;
	for (auto i : marks)
		uniqueMarks.insert(i);
	cout << "Unique Marks: " << uniqueMarks.size() << endl;
	size_t maxCount = 0;
	for (auto i : uniqueMarks)
	{
		if (marks.count(i) > marks.count(maxCount))
			maxCount = i;
	}
	cout << "Most frequent marks: " << maxCount << endl;
	cout << "Ascending order: ";
	for (auto i = marks.begin(); i != marks.end(); ++i)
		cout << *i << " ";
	cout << endl << "Descending Order: ";
	for (auto i = marks.rbegin(); i != marks.rend(); ++i)
		cout << *i << " ";
	return 0;
}