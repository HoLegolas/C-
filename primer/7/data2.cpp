#include <iostream>
#include <string>
#include "Sales_data.h"

using namespace std;

int main()
{
	Sales_data total, trans, temp;
	read(cin, total);
	print(cout, total) << endl;
	read(cin, trans);
	total.combine(trans);
	print(cout, total) << endl;
	temp = add(total, trans);
	print(cout, temp) << endl;
	return 0;
}
