#include "animal.hpp"

Animal::Animal(Animal const & other)
{
	std::cout << "constructor by copy of an animal has been called" << std::endl;
	*this = other;
}

Animal::Animal()
{
	std::cout << "constructor by default of an animal has been called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "deconstructor of an animal has been called" << std::endl;
}

Animal& Animal::operator=(Animal const &other)
{
	this->type = other.type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "*laugh in animal noise*" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}
