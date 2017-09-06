#include <iostream>
#include "ptr.h"

extern const int buff;

int main()
{
	int i = 2;
	int* ip = &i, *&r = ip;

	std::cout << i << " " << *ip << " " << *r << std::endl;
	std::cout << buff << std::endl;
	double dval = 5.12;
	const int temp = dval;
	const int &ri = temp;
	std::cout << ri << std::endl;
	int i2 = 6;
	int *const p2 = &i2;
	const int *const pp2 = p2;
	std::cout << *pp2 << std::endl;
	const int ci = 42;
	const int *p3 = &ci;
	p3 = ip;
    constexpr int mf = 20;
	int null = 0, *p = &null;	
	return 0;
}
