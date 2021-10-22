#ifndef SCAVTRAP
#define SCAVTRAP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string const NameGiven);
		ScavTrap(ScavTrap &copy);
		ScavTrap();
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap &other);

		void gardGate();
		void attack(std::string const &target);
		void takeDammage(unsigned int ammount);
		void beRepaired(unsigned int ammount);
};

#endif