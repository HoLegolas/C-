#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item book;
	std::cout << "Enter book's info: " << std::endl;
	std::cin >> book;
	std::cout << book << std::endl;
	std::string name("LAKE");
	std::cout << name << std::endl;
	return 0;
}
