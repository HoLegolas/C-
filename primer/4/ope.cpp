#include <iostream>

using namespace std;

int main()
{
	int i = 1;
	cout << i << " " << ++i << endl;
	int k = -i;
	cout << k << endl;
	cout << k/i << " " << i/k << endl;
	int m = 27;
	int n = 4;
	cout << m%(-n) << " " << (-m)%n << endl;
	const char *cp = "Hello";
	if (cp && *cp)
		cout << "Success" << endl;
	int val = 0;
	if (val++ && val)
		cout << "Done" << endl;
	cout << (3 < 4) ? "lske" : "hp";
	return 0;
}
