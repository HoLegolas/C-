#include <iostream>
#include <string>
#include "Sales_data.h"

using namespace std;

int main()
{
	Sales_data total;
	if (cin >> total) {
		Sales_data trans;
		while (cin >> trans) {
			if (total.isbn() == trans.isbn()) {
				total.combine(trans);
			} else {
				cout << total.bookNo << total.units_sold << total.avg_price() << endl;
				total = trans;
			}
		}
		cout << total.bookNo << total.units_sold << total.avg_price() << endl;
	} else {
		cerr << "NO DATA?!" << endl;
		return -1;
	}
	return 0;
}

