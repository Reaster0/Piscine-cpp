#include "cat.hpp"

Cat::Cat()
{
	std::cout << "constructor by default of Cat is called" << std::endl;
	type = "cat";
}

Cat::Cat(Cat const& other)
{
	std::cout << "constructor by copy of Cat is called" << std::endl;
	*this = other;
}

Cat::~Cat()
{
	std::cout << "destructor of Cat is called" << std::endl;
}

Cat& Cat::operator=(Cat const& other)
{
	this->type = other.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "big Cat is happy" << std::endl;
}