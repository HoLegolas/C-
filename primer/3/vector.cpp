#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<string> svec(10, "HI");
	for ( auto s : svec)
		cout << s << " ";
	cout << endl;
	return 0;
}
