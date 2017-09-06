#include <iostream>

int global_int=5;
std::string global_str;
double pi = 3.145;

int main()
{
	std::string book("0-201-783-X");
	std::cout << book + "\012";

	int unit1 = 0;
	int unit2 = {0};
	int unit3(0);
	int unit4{0};
	std::cout << unit1 << " " << unit2 << " " << unit3 << " " << unit4 << std::endl;	
	long double ld = 3.2235453453445;
	int a(ld);
	std::cout << a << std::endl;
	std::cout << "Global is: " << global_int << " and "  << global_str << "end" << std::endl;
	int global_int = 3;
	std::cout << global_int << std::endl;
	std::cout << ::global_int << std::endl;
	std::cout << "Extern: " << pi << std::endl;

	
	return 0;
}
