#include "HumanB.hpp"

HumanB::HumanB(std::string new_name) : name(new_name) , weapon(NULL)
{}

void HumanB::attack(void)
{
	if (!this->weapon)
		std::cout << HumanB::name << " dosen't have a weapon" << std::endl;
	else
		std::cout << HumanB::name << " attacks with his " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &type_weapon)
{
	this->weapon = &type_weapon;
}