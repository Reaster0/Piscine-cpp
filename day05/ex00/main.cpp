#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a;
	Bureaucrat b("lol", 1);


	std::cout << a << std::endl;

	Bureaucrat c("lol2", 151);
	std::cout << c << std::endl;
	c.decrementGrade();
	std::cout << c << std::endl;

	b.incrementGrade();
	std::cout << b << std::endl;
}