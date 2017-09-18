#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string s("FIRST,MIDDLE,LAST");
	auto lcomma = find(s.begin(), s.end(), ',');
	cout << string(s.begin(), lcomma);

	auto rcomma = find(s.rbegin(), s.rend(), ',');
	cout << string(rcomma.base(), s.end());
	return 0;
}
