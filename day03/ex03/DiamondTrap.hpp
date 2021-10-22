#ifndef DIAMONDTRAP
#define DIAMONDTRAP
#include "ClapTrap.cpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string Name;
	
	public:
		DiamondTrap(std::string NameGiven);
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap &operator=(const DiamondTrap &other);

		void attack(std::string const &target);
		void WhoAmI();
};
#endif