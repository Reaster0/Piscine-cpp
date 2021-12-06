#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a;
	Bureaucrat b("lol", 1);
	Form c("test", 3, 3);
	Form d;

	d = c;

	try
	{
		c.beSigned(a); //
		a.signForm(c); // actually the two are the same thing
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b.signForm(d); //
		d.beSigned(a); // again same thing but it work
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << c << std::endl;

	try
	{
		Form e("marche po", 155, 1); //get an error
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}