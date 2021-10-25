#include "doggo.hpp"

Dog::Dog()
{
	std::cout << "constructor by default of dog is called" << std::endl;
	type = "dog";
	_brain = new Brain();
}

Dog::Dog(Dog const& other)
{
	std::cout << "constructor by copy of dog is called" << std::endl;
	_brain = new Brain(*other._brain);
	*this = other;
}

Dog::~Dog()
{
	std::cout << "destructor of dog is called" << std::endl;
	delete _brain;
}

Dog& Dog::operator=(Dog const& other)
{
	this->type = other.type;
	*_brain = *other._brain;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "big doggo is happy" << std::endl;
}

void Dog::change_ideas(std::string *ideas)
{
	for (int i = 0; i < 100; i++)
		_brain->ideas[i] = ideas[i];
}

void Dog::tell_ideas()
{
	for (int i = 0; i < 100 && _brain; i++)
		std::cout << _brain->ideas[i] << std::endl;
}