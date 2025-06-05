#include<iostream>
#include<set>
#include<string>
using namespace std;

int main()
{
	string text = "hello world hello code hello learn world code";
	multiset<string>words;
	size_t start = 0, end;
	while ((end=text.find(' ', start)) != string::npos)
	{
		words.insert(text.substr(start, end-start));
		start = end+1;
	}
	words.insert(text.substr(start));
	for (auto i : words)
		cout << i << " ";
	cout << endl;
	cout << "Count of 'hello': " << words.count("hello") <<endl;
	cout << "Count of 'world': " << words.count("world")<<endl;
	cout << "Count of 'code': " << words.count("code")<<endl;
}