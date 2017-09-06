#include <iostream>
using namespace std;

void err_msg(initializer_list<string> ls)
{
	for (const auto &element : ls)
		cout << element << " ";
	cout << endl;
}

int main()
{
	err_msg({"functionX", "Accepted", "OK"});
	return 0;
}
