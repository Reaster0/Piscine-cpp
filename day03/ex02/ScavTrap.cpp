#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const NameGiven):ClapTrap(NameGiven)
{
	Name = NameGiven;
	Hitpoints = 100;
	EnergyPoints = 50;
	AttackDammage = 20;
	
	std::cout << "the constructor of the ScavTrap " << Name << " has been called." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &copy)
{
	*this = copy;
	std::cout << "the constructor by copy of the ScavTrap " << Name << " has been called." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "the destructor of the ScavTrap " << Name << " has been called." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	this->Name = other.Name;
	std::cout << "= overload has been called for ScavTrap" << std::endl;
	return *this;
}

void ScavTrap::attack(std::string const &target)
{
	std::cout << "Scavtrap " << Name << " attack " << target
	<< " and has done " << AttackDammage << " dammages with his attack!" << std::endl;
}

void ScavTrap::takeDammage(unsigned int ammount)
{
	std::cout << "Scavtrap " << Name << " has taken " << ammount << " dammage!" << std::endl;
	if (ammount > (unsigned int)EnergyPoints)
		std::cout << "and has die sadly..." << std::endl;
	EnergyPoints -= ammount;
}

void ScavTrap::beRepaired(unsigned int ammount)
{
	std::cout << "Scavtrap " << Name << " has been healed of "
	<< ammount << " EnergyPoints!" << std::endl;
	EnergyPoints += ammount;
}

void ScavTrap::gardGate(void)
{
	std::cout << "the ScavTrap " << Name << " is now in Gate Keeper mode" << std::endl;
}