#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a;
	Bureaucrat b("lol", 1);

	std::cout << a << std::endl;

	try
	{
		Bureaucrat c("lol2", 151); //should throw an error
		std::cout << c << std::endl;

		c.decrementGrade(); //should also throw an error
		std::cout << c << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		b.incrementGrade(); //should throw an error
		std::cout << b << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		b.decrementGrade(); //should work as intended
		std::cout << b << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}