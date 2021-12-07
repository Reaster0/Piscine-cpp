#include "whatever.hpp"

int main()
{
	int a = 22;
	int b = 42;
	swap(a, b);
	std::cout << "a is now =" << a << " and b is now =" << b << std::endl;

	std::string test = "this is the first one";
	std::string test2 = "and this is the second one";
	swap(test, test2);
	std::cout << "test =" << test << " and test2 =" << test2 << std::endl;
	std::cout << "-------------------------------------------" << std::endl;

	std::cout << "the bigger between a :" << a << "\nand b :" << b << "\nis " << max(a, b) << std::endl;
	std::cout << "the lesser between a :" << a << "\nand b :" << b << "\nis " << min(a, b) << std::endl;

	std::cout << "the bigger between test >" << test << "\nand test2 >" << test2 << "\nis >" << max(test, test2) << std::endl;
	std::cout << "the lesser between test >" << test << "\nand test2 >" << test2 << "\nis >" << min(test, test2) << std::endl;

}