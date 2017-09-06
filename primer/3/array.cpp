#include <iostream>
#include <cstddef>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int a[] = {0,1,2,3,4,5,6,7,8,9};
	int *b = begin(a);
	int *e = end(a);

	for (; b != e; ++b) {
		cout << *b << " ";
	}
	cout << endl;
	char s[] = "Hello Lake";
	char *pb = begin(s);
	char *pe = end(s);
	size_t cnt = 0;
	while (pb != pe && *pb != ' ') {
		++cnt;
		++pb;
	}
	cout << cnt << endl;
	char *s1 = s;
	char *s2 = s;
	cout << s1[0] << endl;
	
	char c1[] = {'l','a','k','e'};
	char c2[] = {'l','a','k','e','\0'};
	vector<char> cvec(begin(c2), end(c2));
	cout << cvec[0] << " " << cvec[1] << endl;

	return 0;
}
