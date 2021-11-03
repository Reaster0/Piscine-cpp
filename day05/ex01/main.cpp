#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a;
	Bureaucrat b("lol", 1);


	std::cout << a << std::endl;

	Bureaucrat c("lol2", 151); //should throw an error
	std::cout << c << std::endl;
	c.decrementGrade(); //should also throw an error
	std::cout << c << std::endl;

	b.incrementGrade(); //should throw an error
	std::cout << b << std::endl;
}