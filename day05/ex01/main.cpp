#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a;
	Bureaucrat b("lol", 1);
	Form c("test", 3, 3);
	Form d;
	d = c; 

	c.beSigned(a);
}