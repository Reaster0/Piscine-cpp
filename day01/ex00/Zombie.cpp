#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "<" << Zombie::name << "> ";
	std::cout << "has been broken down\n";
}

void Zombie::announce(void)
{
	std::cout << "<" << Zombie::name << "> ";
	std::cout << "BraiiiiiiinnnzzzZ...\n";
}