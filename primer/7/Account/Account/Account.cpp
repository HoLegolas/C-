#include "Account.h"


int main()
{
	Account B("LAKE", 180);
	B.print();
	B.rate(1.2);
	B.calculate();
	B.print();
	system("pause");
	return 0;
}