#include "brain.hpp"

Brain::Brain()
{
	std::cout << "constructor by default of a brain called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "idea"; 
}

Brain::Brain(Brain const &other)
{
	std::cout << "constructor by copy of another brain called" << std::endl;
	*this = other;
}

Brain::~Brain()
{
	std::cout << "destructor of a brain called" << std::endl;
}

Brain& Brain::operator=(const Brain &other)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	return *this;
}