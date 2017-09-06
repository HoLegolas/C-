#include <iostream>
#include "chapter6.h"

int fact(int val)
{
	if (val == 0)
		return 1;
	if (val < 0) {
		throw std::runtime_error("Factorial is not defined for negative values.");
	}
	int rect = 1;
	while (val) {
		rect *= val;
		--val;
	}
	return rect;
}
