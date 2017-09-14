#include "Sales_data.h"

using namespace std;

int main()
{
	Sales_data total(cin), trans("1312", 23, 45), temp;
	//read(cin, total);
	print(cout, total) << endl;
	//read(cin, trans);
	string null_book("9-999-99");
	total.combine(static_cast<Sales_data> (cin));
	print(cout, total) << endl;
	temp = add(total, trans);
	print(cout, temp) << endl;
	system("pause");
	return 0;
}
