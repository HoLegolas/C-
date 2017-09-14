#include <iostream>

int main()
{
	std::string s( "Lá cây");
	std::string a("La cay");
	std::cout << s.size() << " " << a.size() << std::endl;
	int x;
	std::cin >> x;
	auto old_state = std::cin.rdstate();
	std::cin.clear();
	if (std::cin)
		std::cout << "Right\n";
	std::cout << old_state << std::endl;
	std::cin.setstate(old_state);
	if (std::cin.fail())
		std::cout << "Fail\n";
	std::cin.clear(std::cin.rdstate() & ~std::cin.failbit & std::cin.badbit);
	if (std::cin)
		std::cout << "Right\n";

	std::cin.tie(&std::cout);
	return 0;
}