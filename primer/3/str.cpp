#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main()
{
	string s("Hello!!!");
	decltype(s.size()) punct_cnt = 0;
	for (auto &c : s) {
		if (ispunct(c))
			++punct_cnt;
		c = toupper(c);
	}
	cout << punct_cnt << " punctuation characters in " << s << endl;

	string s1("hello world lake");
	if (s1[0] >= 'a' || s1[0] <= 'z')
		s1[0] -= 32;

	for (decltype(s1.size()) index = 1; index < s1.size(); index++) {
		if (s1[index] == ' ') {
			if (s1[index+1] >= 'a' || s1[index+1] <= 'z')
				s1[index+1] -= 32;
			cout << "Found " << index << endl;
			++index;
		}	
	}
	cout << s1 << endl;
	for(auto &c : s1)
		if (c != 'X')
			c = 'X';

	cout << s1 << endl;
	return 0;
}
