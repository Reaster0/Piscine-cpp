#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const NameGiven)
{
	Name = NameGiven;
	Hitpoints = 10;
	EnergyPoints = 10;
	AttackDammage = 0;
	std::cout << "the constructor of " << Name << " has been called." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
	*this = copy;
	std::cout << "the constructor by copy of " << Name << " has been called." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "the destructor of " << Name << " has been called." << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << "Claptrap " << Name << " attack " << target
	<< " and has done " << AttackDammage << " dammages with his attack!" << std::endl;
}

void ClapTrap::takeDammage(unsigned int ammount)
{
	std::cout << "Claptrap " << Name << " has taken " << ammount << " dammage!" << std::endl;
	if (ammount > (unsigned int)EnergyPoints)
		std::cout << "and has die sadly..." << std::endl;
	EnergyPoints -= ammount;
}

void ClapTrap::beRepaired(unsigned int ammount)
{
	std::cout << "Claptrap " << Name << " has been healed of "
	<< ammount << " EnergyPoints!" << std::endl;
	EnergyPoints += ammount;
}