#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap subject_0("Zero");
	DiamondTrap useless;
	
	
	subject_0.attack("a simple three");
	subject_0.highFivesGuys(); // the fragtrap function
	subject_0.gardGate();	//the scavtrap function
	subject_0.WhoAmI();
	useless.WhoAmI();
}