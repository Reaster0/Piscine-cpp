#include "span.hpp"

int main()
{
	span lol(10);
	for (int i = 0; i < 10; i++)
	{
		lol.addNumber(i);
	}
	std::cout << lol.longestSpan();
}