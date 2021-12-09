#include "easyfind.hpp"

int main()
{
	std::vector<int> test;
	test.push_back(1);
	test.push_back(2);
	test.push_back(3);
	test.push_back(2);

	try{
	std::cout << easyfind(test, 2) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try{
	std::cout << easyfind(test, 7) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

}