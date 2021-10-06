#include "Weapon.hpp"

Weapon::Weapon(std::string const &type)
{
	Weapon::type = type;
}

std::string Weapon::getType(void)
{
	return (Weapon::type);
}

void Weapon::setType(std::string const &type)
{
	Weapon::type = type;
}