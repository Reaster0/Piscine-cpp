#include "base.hpp"
#include <typeinfo>

Base *generate(void)
{
	srand(time(NULL));
	int value = rand() % 3;

	if (value == 0)
	{
		std::cout << "return a A" << std::endl;
		return new A();
	}
	if (value == 1) 
	{
		std::cout << "return a B" << std::endl;
		return new B();
	}
	else
	{
		std::cout << "return a C" << std::endl;
		return new C();
	}
}

void identify(Base* p)
{
	A *test;
	if ((test = dynamic_cast<A*>(p)))
		std::cout << "it is a A" << std::endl;
	B *test2;
	if ((test2 = dynamic_cast<B*>(p)))
		std::cout << "it is a B" << std::endl;
	C *test3;
	if ((test3 = dynamic_cast<C*>(p)))
		std::cout << "it is a C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &test = dynamic_cast<A&>(p);
		std::cout << "it is a A" << std::endl;
		(void)test;
	}
	catch(const std::bad_cast &bc)
	{
	}
	try
	{
		B &test = dynamic_cast<B&>(p);
		std::cout << "it is a B" << std::endl;
		(void)test;
	}
	catch(const std::bad_cast &bc)
	{
	}
	try
	{
		C &test = dynamic_cast<C&>(p);
		std::cout << "it is a C" << std::endl;
		(void)test;
	}
	catch(const std::bad_cast &bc)
	{
	}
}

int main()
{
	Base *temp = generate();
	identify(temp);
	identify(*temp);
}