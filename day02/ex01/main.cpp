#include "Fixed.hpp"

int main()
{
	Fixed a(30.56f);

	std::cout << a.toFloat() << std::endl;
}