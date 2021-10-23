#ifndef DIAMONDTRAP
#define DIAMONDTRAP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string Name;
	
	public:
		DiamondTrap(std::string const NameGiven);
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap &operator=(const DiamondTrap &other);

		void attack(std::string const &target);
		void WhoAmI();
};
#endif