#ifndef SCAVTRAP
#define SCAVTRAP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string const NameGiven);
		ScavTrap(ScavTrap &copy);
		~ScavTrap();
	
};

#endif