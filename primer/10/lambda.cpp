#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;

void printString(const vector<string> &words)
{
	for (auto &ref : words)
		cout << ref + " ";
	cout << endl;
}

string make_plural(size_t ctr, const string &word, const string &end)
{
	return (ctr > 1) ? word + end : word;
}

bool check_size(const string &s, string::size_type sz)
{
	return s.size() >= sz;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
	sort(words.begin(), words.end());
	printString(words);
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
	printString(words);
	stable_sort(words.begin(), words.end(), [](const string &a, const string &b){ return a.size() < b.size(); });
	printString(words);
	auto wc = find_if(words.begin(), words.end(), [sz](const string &a){ return a.size() >= sz; });
	//auto count = count_if(words.begin(), words.end(), [](const string &s){ return s.size() >= 6; });
	// auto count = words.end() - wc;
	auto check6 = bind(check_size,placeholders:: _1, ref(sz));
	auto count = count_if(words.begin(), words.end(), check6);
	cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer" << endl;
	for_each(wc, words.end(), [](const string& s) { cout << s << " "; });
	cout << endl;
}

int main()
{
	auto f = [] { return 42; };
	cout << f() << endl;
	vector<string> words = {"the", "quick", "red", "fox", "jump", "over", "the", "slow",  "red", "turtle"};
	biggies(words, 5);
	return 0;
}
