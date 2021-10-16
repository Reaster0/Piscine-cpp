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
		ClapTrap();
		ClapTrap(std::string const NameGiven);
		ClapTrap(ClapTrap &copy);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &other);

		void attack(std::string const &target);
		void takeDammage(unsigned int ammount);
		void beRepaired(unsigned int ammount);

};

#endif