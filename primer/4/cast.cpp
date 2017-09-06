#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
	int i = 1, j = 3;
	double slope = static_cast<double>(i/j);
	double normal = i/j;
	cout << slope << " " << normal << endl;
	int *ip = &i;
	char *pc = reinterpret_cast<char*>(ip);
	string str(pc);
	cout << str << endl;
	char a = 'A';
	char *ap = &a;
	string str1(ap);
	cout << str1 << endl;
	cout << *pc << endl;
	return 0;
}
