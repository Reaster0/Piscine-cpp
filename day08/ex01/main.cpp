#include "span.hpp"

int main()
{
	span lol(5);
	lol.addNumber(10);
	lol.addNumber(50);
	lol.addNumber(70);
	lol.addNumber(42);
	lol.addNumber(200);
	std::cout << lol.shortestSpan() << std::endl;
	std::cout << lol.longestSpan() << std::endl;

	span little(1);
	little.addNumber(42);
	try
	{
		little.addNumber(666);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		little.shortestSpan();
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}