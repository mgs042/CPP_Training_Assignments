#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
	
char toLowercase(char c)
{
	return tolower(c);
}

int main()
{
	vector<string> words = { "Apple", "banana", "apple", "Orange", "BANANA", "grape" };
	for (string &word : words)
	{
		transform(word.begin(), word.end(), word.begin(), tolower);
	}
	sort(words.begin(), words.end());
	words.erase(unique(words.begin(), words.end()), words.end());
	for (string i : words)
		cout << i << " ";
	cout << endl;
}