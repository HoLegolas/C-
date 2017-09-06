#include <iostream>

int main()
{
	int i = 1024;
	int &ref = i;
	int &ref2 = ref;

	std::cout << ref << " " << ref2 << std::endl;

	ref = 3;

	std::cout << i << " " << ref << " " << ref2 << std::endl;

	int i = 1.12;
	std::cout << i << std::endl;
	return 0;
}
