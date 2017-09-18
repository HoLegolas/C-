#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <string>
using namespace std;

int main()
{
	list<int> vi = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	auto iter = vi.begin(); // we are changing vi
	//auto prev = iter;
	while (iter != vi.end())
	{
		if (*iter % 2) {
			iter = vi.insert(iter, *iter); // duplicate current element
			 // advance past this element and the one inserted before it
			iter++;
			iter++;
		}
		else
			iter = vi.erase(iter); // remove even element
			// don't advance the iterator, iter denotes the element after the one we erased
	}
	for (auto ref : vi)
		cout << ref << " ";
	cout << endl;

	// Forward list
	forward_list<int> fi = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	auto fiter = fi.before_begin();
	auto curr = fi.begin();
	while (curr != fi.end())
	{
		if (*curr % 2)
		{
			curr = fi.insert_after(curr, *curr); // curr now denotes to the added element
			fiter = curr;
			curr++; // advance the curr;

		}
		else
		{
			curr = fi.erase_after(fiter); // curr now denotes to the next element
		}
	}
	for (auto ref : fi)
		cout << ref << " ";
	cout << endl;

	vector<string> svec;
	svec.reserve(256);
	string word;
	while (cin >> word && word != "1")
		svec.push_back(word);
	svec.resize(svec.size() + svec.size() / 2);
	cout << svec.capacity() << endl;
	string s2 = "LakeHP";
	s2.insert(1, 3, 'P'); // the positon before which to insert
	cout << s2 << endl;
	s2.erase(1, 2); // starting position to delete
	cout << s2 << endl;
	s2.replace(1, 3, "Lego");
	cout << s2 << endl;
	cout << unsigned(string::npos) << endl;// npos is unsigned (-1)
	return 0;
}