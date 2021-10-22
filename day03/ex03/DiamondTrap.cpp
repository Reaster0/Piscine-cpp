#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string NameGiven):ClapTrap(NameGiven + "_clap_name"), ScavTrap(NameGiven), FragTrap(NameGiven)
{
	this->Name = NameGiven;
	this->Hitpoints = FragTrap::Hitpoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDammage = FragTrap::AttackDammage;
	std::cout << "the constructor of the DiamondTrap " << Name << " has been called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	*this = other;
	std::cout << "the constructor by copy of the DiamondTrap " << Name << " has been called." << std::endl;
}

DiamondTrap::DiamondTrap():ClapTrap("default_name_clap_name"), ScavTrap(), FragTrap()
{
	this->Name = "default_name";
	this->Hitpoints = FragTrap::Hitpoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDammage = FragTrap::AttackDammage;
	std::cout << "the constructor by default of the DiamondTrap " << Name << " has been called." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "the deconstructor of the DiamondTrap " << Name << " has been called." << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
	this->ScavTrap::attack(target);
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	this->Name = other.Name;
	this->Hitpoints = other.Hitpoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDammage = other.AttackDammage;
	std::cout << "= overload has been called for DiamondTrap" << std::endl;
	return *this;
}

void DiamondTrap::WhoAmI()
{
	std::cout << "my DiamondTrap name is " << Name << " and my Claptrap name is " << this->ClapTrap::Name << std::endl;
}
