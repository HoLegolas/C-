#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item total;
	if (std::cin >> total) {
		Sales_item trans;
		int count = 1;
		while (std::cin >> trans) {
			if (trans.isbn() == total.isbn()) {
				total += trans;
				++count;
			} else {
				std::cout << total << std::endl;
				std::cout << total.isbn() << ": " << count << std::endl;
				total = trans;
				count = 1;
			}
		}
		std::cout << total << std::endl;
		std::cout << total.isbn() << ": " << count << std::endl;
	} else {
		std::cerr << "No data ?!" << std::endl;
		return -1;
	}
	return 0;
}
