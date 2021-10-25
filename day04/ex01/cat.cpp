#include "cat.hpp"

Cat::Cat()
{
	std::cout << "constructor by default of Cat is called" << std::endl;
	type = "cat";
	_brain = new Brain;
}

Cat::Cat(Cat const& other)
{
	std::cout << "constructor by copy of Cat is called" << std::endl;
	_brain = new Brain(*other._brain);
	*this = other;
}

Cat::~Cat()
{
	std::cout << "destructor of Cat is called" << std::endl;
	delete _brain;
}

Cat& Cat::operator=(Cat const& other)
{
	this->type = other.type;
	*_brain = *other._brain;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "big Cat is happy" << std::endl;
}

void Cat::change_ideas(std::string *ideas)
{
	for (int i = 0; i < 100; i++)
		_brain->ideas[i] = ideas[i];
}

void Cat::tell_ideas()
{
	for (int i = 0; i < 100 && _brain; i++)
		std::cout << _brain->ideas[i] << std::endl;
}