#ifndef CLAPTRAP
#define CLAPTRAP
#include <string>
#include <iostream>

class ClapTrap
{
	private:
		std::string Name;
		int Hitpoints;
		int EnergyPoints;
		int AttackDammage;
	
	public:
		ClapTrap(std::string const NameGiven);
		ClapTrap(ClapTrap &copy);
		~ClapTrap();

		void attack(std::string const &target);
		void takeDammage(unsigned int ammount);
		void beRepaired(unsigned int ammount);

};

#endif