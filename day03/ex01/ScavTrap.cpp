#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const NameGiven):ClapTrap(NameGiven)
{
	Hitpoints = 100;
	EnergyPoints = 50;
	AttackDammage = 20;
	
	std::cout << "the constructor of the ScavTrap " << Name << " has been called." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &copy)
{
	*this = copy;
	//std::cout << "the constructor by copy of the ScavTrap " << Name << " has been called." << std::endl;
}

ScavTrap::~ScavTrap()
{
	//std::cout << "the destructor of the ScavTrap " << Name << " has been called." << std::endl;
}