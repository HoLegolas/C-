#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <string>

using namespace std;

int main()
{
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	int len = sizeof(ia) / sizeof(ia[0]);
	vector<int> vi = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	list<int> li = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };

	vector<int>::iterator v = vi.begin();
	list<int>::iterator l = li.begin();

	while (v != vi.end()  || l != li.end()) {
		if (!vi.empty()) {
			if (*v % 2 == 0) {
				v = vi.erase(v);
			}
			else
				++v;
		}
		if (!li.empty())
		{
			if (*l % 2)
				l = li.erase(l);
			else
				++l;
		}
	}
	if (!vi.empty())
		for (auto ref : vi)
			cout << ref << " ";
	cout << endl;

	if (!li.empty())
		for (auto ref : li)
			cout << ref << " ";
	cout << endl;

	/* FOWARD_LIST*/
	forward_list<string> fls = { "lake", "many", "some", "this" };
	string s1("some");
	string s2("land");

	auto prev = fls.before_begin();
	auto curr = fls.begin();
	while (curr != fls.end())
	{
		if (*curr == s1)
		{
			fls.insert_after(curr, s2);
			break;
		}
		else
		{
			prev = curr;
			++curr;
			if (curr == fls.end())
			{
				fls.insert_after(prev, s2);
			}
		}
	}
	for (auto ref : fls)
		cout << ref << " ... ";
	cout << endl;
	vector<int> a{ 1, 2, 3, 4, 5 };
	int *ref = &a[4];
	a.resize(1);  
	*ref = 8;
	cout << ref << endl;
	return 0;
}