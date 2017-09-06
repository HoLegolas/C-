#include <iostream>
using namespace std;

void init(int ht = 24, int wd = 23, char bckgrnd = 'o')
{
#ifndef NDEBUG
	cout << __func__ << endl;
	return;
#endif
}

int main()
{
	init();
	return 0;
}
