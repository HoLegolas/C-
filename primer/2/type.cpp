#include <iostream>

int main()
{
	using si = int;
	si i = 3;
	std::cout << i << std::endl;
	
	int a = 3, b = 5;
	decltype(a) c = a;
	c++;
	std::cout << c << " " << a << std::endl;
	decltype(a = b) d = a;
	d++;
	std::cout << d << " " << a << std::endl;
	return 0;
}
