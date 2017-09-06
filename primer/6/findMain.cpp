#include <iostream>
#include "find_char.h"
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	string s(argv[1]);
	string::size_type count = 0;
	auto index = find_char(s, *argv[2], count);

	cout << "Index: " << index << endl;
	cout << "Count: " << count << endl;
	return 0;
}
