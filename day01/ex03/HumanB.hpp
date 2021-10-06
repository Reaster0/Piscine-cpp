#ifndef HUMANB_H
#define HUMANB_H
#include "Weapon.hpp"

class HumanB
{
	private:
	std::string name;
	Weapon *weapon;

	public:
	HumanB(void);
	HumanB(std::string name);

	void attack(void);
	void setWeapon(Weapon &type_weapon);
};

#endif