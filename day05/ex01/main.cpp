#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a;
	Bureaucrat b("lol", 1);
	Form c("test", 3, 3);
	Form d;
	d = c;

	c.beSigned(a); //
	a.signForm(c); // actually the two are the same thing

	b.signForm(d); //
	d.beSigned(a); // again same thing but it work

	std::cout << c << std::endl;

	Form e("marche po", 155, 1); //get an error
}