#include "doggo.hpp"

Dog::Dog()
{
	std::cout << "constructor by default of dog is called" << std::endl;
	type = "dog";
}

Dog::Dog(Dog const& other)
{
	std::cout << "constructor by copy of dog is called" << std::endl;
	*this = other;
}

Dog::~Dog()
{
	std::cout << " destructor of dog is called" << std::endl;
}

Dog& Dog::operator=(Dog const& other)
{
	this->type = other.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "big doggo is happy" << std::endl;
}