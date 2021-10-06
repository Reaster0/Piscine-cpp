#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon &type_weapon) : name(new_name), weapon(type_weapon)
{}

void HumanA::attack(void)
{
	std::cout << HumanA::name << " attacks with his " << HumanA::weapon.getType() << std::endl;
}