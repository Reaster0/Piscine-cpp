#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const NameGiven):ClapTrap(NameGiven)
{
	Hitpoints = 100;
	EnergyPoints = 100;
	AttackDammage = 30;
	
	std::cout << "the constructor of the FragTrap has been called." << std::endl;
}

FragTrap::FragTrap(FragTrap &copy)
{
	*this = copy;
	std::cout << "the constructor by copy of the FragTrap has been called." << std::endl;
}

FragTrap::FragTrap(): ClapTrap("default_name")
{
	Hitpoints = 100;
	EnergyPoints = 50;
	AttackDammage = 20;
	std::cout << "the constructor by default of the FragTrap has been called." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "the destructor of the FragTrap has been called." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	this->Name = other.Name;
	this->Hitpoints = other.Hitpoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDammage = other.AttackDammage;
	std::cout << "= overload has been called for FragTrap" << std::endl;
	return *this;
}

void FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap " << Name << " attack " << target
	<< " and has done " << AttackDammage << " dammages with his attack!" << std::endl;
}

void FragTrap::takeDammage(unsigned int ammount)
{
	std::cout << "FragTrap " << Name << " has taken " << ammount << " dammage!" << std::endl;
	if (ammount > (unsigned int)EnergyPoints)
		std::cout << "and has die sadly..." << std::endl;
	EnergyPoints -= ammount;
}

void FragTrap::beRepaired(unsigned int ammount)
{
	std::cout << "FragTrap " << Name << " has been healed of "
	<< ammount << " EnergyPoints!" << std::endl;
	EnergyPoints += ammount;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << Name << " make a highfive!" << std::endl;
}