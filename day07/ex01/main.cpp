#include "iter.hpp"

template<typename T>
void valueIn(T &thing)
{
	std::cout << "the value of the thing is >" << thing << std::endl;
}

int main()
{
	int intTest[4] = {42, 60, 44, 1};
	char charTest[7] = {'e', 'a', 'r', 'n', 'a', 'u', 'd'};

	iter(intTest, 4, &valueIn);
	std::cout << "------------------------------\n";
	iter(charTest, 7, &valueIn);
}