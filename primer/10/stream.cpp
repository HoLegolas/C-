#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
/*	istream_iterator<int> in_iter(cin), eof;
	vector<int> vec(in_iter, eof);
	ostream_iterator<int> out_iter(cout, " ");
	for (auto e : vec)
		*out_iter++ = e;
	cout << endl;
	*/
	ifstream lake("lake.txt");
	istream_iterator<string> in(lake), eof;
	ofstream hp("hp.txt");
	ostream_iterator<string> out(hp, " ");
	vector<string> fvec(in, eof);
	for (auto &ref : fvec)
		out = ref;
	cout << endl;
	return 0;
}
