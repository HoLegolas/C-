#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string s("l");
	if(s.begin() != s.end()) {
		auto it = s.begin();
		*it = toupper(*it);
	}
	auto c = s.begin();
	auto e = s.end();
	cout << *e << endl;
	cout << *c << endl;
	cout << s << endl;

	vector<int> iv{1,2,3,4,5,6,7,8,9,0};
	auto beg = iv.begin(), end = iv.end();
	auto mid = beg + (end - beg)/2;
	while (mid != end && *mid != 9) {
		if (9 < *mid)
			end = mid;
		else
			beg = mid + 1;
		mid = beg + (end - beg)/2;
	}
	cout << *mid << endl;
	return 0;
}

