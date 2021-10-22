#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	Name = "default name";
	Hitpoints = 10;
	EnergyPoints = 10;
	AttackDammage = 0;
	std::cout << "the constructor by default of " << Name << " has been called." << std::endl;
}

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

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	this->Name = other.Name;
	this->Hitpoints = other.Hitpoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDammage = other.AttackDammage;
	std::cout << "= overload has been called" << std::endl;
	return *this;
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