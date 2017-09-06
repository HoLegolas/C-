#include <iostream>
using namespace std;

string::size_type find_char(const string &s, char c, string::size_type &count)
{
	auto ret = s.size(); // if can't find 'c', ret will be equal to s.size()
	count = 0;

	for (decltype(ret) i = 0; i < s.size(); ++i) {
		if (s[i] == c) {
			if (ret == s.size())
				ret = i;
			++count;
		}
	}

	return ret;
}
