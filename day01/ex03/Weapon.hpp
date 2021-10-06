#ifndef WEAPON_H
#define WEAPON_H
#include <string>
#include <iostream>

class Weapon
{
	private:
	std::string type;
	
	public:
	Weapon(std::string const &type);

	std::string getType(void);
	void setType(std::string const &type);
};
#endif