#ifndef FRAGTRAP
#define FRAGTRAP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string const NameGiven);
		FragTrap(FragTrap &copy);
		~FragTrap();
		FragTrap &operator=(const FragTrap &other);

		void attack(std::string const &target);
		void takeDammage(unsigned int ammount);
		void beRepaired(unsigned int ammount);
		void highFivesGuys();
};

#endif